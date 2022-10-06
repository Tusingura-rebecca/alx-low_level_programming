#include "main.h"
#include <stdlib.h>

/**
* array_range - creates an array of integers
*@min: first integer
*@max: last integer
*Return: pointer to the newly created array or NULL if it fails
*/
int *array_range(int min, int max)
{
	int i, m;
	int *b;

	if (min > max)
		return (NULL);
	m = max - min + 1;
	b = malloc(sizeof(int) * m);
	if (b == NULL)
		return (NULL);
	for (i = 0; i < m; i++, min++)
	{
		b[i] = min;
	}
	return (b);
}
