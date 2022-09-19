#include "main.h"
#include <stdio.h>
#include <string.h>

/**
*print_rev - prints a string, in reverse
*@s: the string to reverse
Return: 0
*/
void print_rev(char *s)
{
	int len = strlen(s);

	while (len--)
		putchar(*(s + len));
	putchar(10);
}
