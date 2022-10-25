#include <stdio.h>
#include "lists.h"

/**
*pop_listint - deletes the head node of a listint_t linked list
*@head: pointer to the linked list
*Return:  empty return 0, if otherwise- head node's data
*/
int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	if (*head == NULL)
		return (0);

	temp = *head;
	n = (*head)->n;
	*head = (*head)->next;

	free(temp);

	return (n);
}
