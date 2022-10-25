#include <stdio.h>
#include "lists.h"

/**
*sum_listint -  returns the sum of all the data(n) of list
*@head: pointer to list
*Return: 0 if list is empty, else sum of (n)
*/
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
