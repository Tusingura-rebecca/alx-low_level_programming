#include "main.h"

/**
*_strcat - concatenates two strings
*the end of the string is pointed to by @dest
*@dest: the string to append
*@src: string to be concatenated
*
*Return: pointer to @dest
*/
char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
