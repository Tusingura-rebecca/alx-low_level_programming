#include <stdio.h>

/**
*main - prints single digit numbers of base 10 starting from zero
*
*Return: 0
*/
int main(void)
{
	char n;

	for (n = '0'; n <= '9'; n++)
		putchar(n);

	putchar('\n');
	return (0);
}
