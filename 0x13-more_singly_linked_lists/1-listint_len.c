#include <stdio.h>
#include "lists.h"

/**
*listint_len -  returns the number of elements in a linked listint_t list.
*@h: head pointer
*Return: number of elements
*/
size_t listint_len(const listint_t *h)
{
	size_t num_elements = 0;
	const listint_t *current = h;

	while (current != NULL)
	{
		num_elements++;
		current = current->next;
	}
	return (num_elements);
}
