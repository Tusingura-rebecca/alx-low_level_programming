#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
*main - main block
*Description: Get random number and print it
*if it is greater than 5. less than 6 and not 0, or zero
*Return: 0
*/
int main(void)
{
	int n;
	char last[] = "last digit of";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("%s %d is %d and is", last, n, n % 10);

	if (n % 10 > 5)
		printf("greater than 5\n");
	else if (n % 10 == 0)
		printf("0\n");
	else
		printf("less than 6 and not 0\n");
	return (0);
}
