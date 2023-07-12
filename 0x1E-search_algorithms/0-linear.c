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
	size_t j = 0;
	if (array == NULL)
		return (-1);

	for (; j < size; j++)
	{
		printf("Value checked array[%lu] = [%d]\n", j, array[j]);
		if (array[j] == value)
			return (j);
	} return (-1);
}
