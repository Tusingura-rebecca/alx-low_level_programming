#include "main.h"
#include <stdlib.h>

/**
*string_nconcat - concatenates two strings
*@s1: first string we are copying
*@s2: seconf string to copy
*@n: number of bytes to copy
*Return: char pointer to newly allocate place in memory
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k;
	char *new_str;

	if (s1 == NULL)
		i = 0;

	else
	{
		for (i = 0; s1[i]; i++)
			;
	}
	if (s2 == NULL)
		j = 0;
	else
	{
		for (j = 0; s2[j]; j++)
			;
	}
	if (j > n)
		j = n;
	new_str = malloc(sizeof(char) * (i + j + 1));
	if (new_str == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
		new_str[k] = s1[k];
	for (k = 0; k < j; k++)
		new_str[k + i] = s2[k];
	new_str[i + j] = '\0';
	return (new_str);
}
