#include "main.h"
#include <stdio.h>

/**
*_puts - prints a string
*@str: the string to ptint
*Description: prints a string
*Return: no error (on success)
*/
void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		putchar(*(str + i));
		i++;
	}
	putchar(10);
}
