#include "search_algos.h"

/**
 * linear_search - linealy search an element from an array
 * @array: Array list
 * @size: An array size
 * @value: an array size
 *
 * Return: index
 */
int linear_search(int *array, size_t size, int value)
{
	int j;
	if (array == NULL)
		return (-1);

	for (j = 0; j < (int)size; j++)
	{
		printf("Value checked array[%lu] = [%d]\n", j, array[j]);
		if (value  == array[j])
			return (j);
	} return (-1);
}
