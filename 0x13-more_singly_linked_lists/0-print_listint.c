#include <stdio.h>
#include "lists.h"

/**
*print_listint - prints all the elements of a listint_t list
*@h: head of list
*Return: number of nodes
*/
size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	const listint_t *new = h;

	while (new != NULL)
	{
		printf("%d\n", new->n);
		count++;
		new = new->next;
	}
	return (count);
}
