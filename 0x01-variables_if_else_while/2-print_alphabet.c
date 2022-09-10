#include <stdio.h>

/**
*main - main block
*Description: prints the alphabet in loer case
*and if it prints tha alphabet the right way, then
*Return: 0
*/
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
