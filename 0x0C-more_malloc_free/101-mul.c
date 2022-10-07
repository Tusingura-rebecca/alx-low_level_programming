#include "main.h"
#include <stdlib.h>

/**
*_print - moves a string one place to the left and prints the string
*@str: string to move
*@w: size of the string
*Return: void
*/
void _print(char *str, int w)
{
	int i, j;

	i = j = 0;
	while (i < w)
	{
		if (str[i] != '0')
			j = 1;
		if (j || i == w - 1)
			_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}

/**
*mul - multiplies a char with a string and places the answer int dest
*@n: char to multiply
*@num: string to multiply
*@num_index: last non NULL index of num
*@dest: destination
*@dest_index: highest index
*Return: point to dest, or NULL for failure
*/
char *mul(char n, char *num, int num_index, char *dest, int dest_index)
{
	int j, k, mul, mulrem, add, addrem;

	mulrem = addrem = 0;
	for (j = num_index, k = dest_index; j >= 0; j--, k--)
	{
		mul = (n - '0') * (num[j] - '0') + mulrem;
		mulrem = mul / 10;
		add = (dest[k] - '0') + (mul % 10) + addrem;
		addrem = add / 10;
		dest[k] = add % 10 + '0';
	}
	for (addrem += mulrem; k >= 0 && addrem; k--)
	{
		add = (dest[k] - '0') + addrem;
		addrem = add / 10;
		dest[k] = add % 10 + '0';
	}
	if (addrem)
	{
		return (NULL);
	}
	return (dest);
}
