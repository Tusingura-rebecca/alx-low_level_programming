#include <stdio.h>

/**
*main - main block
*Description: prints alphabet in lowercase then uppercase
*if printed right, then
*Return: 0
*/
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);

	for (c = 'A'; c <= 'Z'; c++)
		putchar(c);

	putchar('\n');

	return (0)
}
