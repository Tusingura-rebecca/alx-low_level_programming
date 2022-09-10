#include <stdio.h>

/**
*main - main block
*Description: prints the alphabet in lower case and upper case
*if alphabet is printed the right way, then
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
	return (0);
}
