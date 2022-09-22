#include "main.h"

/**
*string_toupper -  changes all lowercase letters of a string to uppercase.
*@x: parameter
*Return: it returns string
*/
char *string_toupper(char *x)
{
	int index = 0;

	while (x[index++])
	{
		if (x[index] >= 'a' && x[index] <= 'z')
			x[index] -= 32;
	}
	return (x);
}
