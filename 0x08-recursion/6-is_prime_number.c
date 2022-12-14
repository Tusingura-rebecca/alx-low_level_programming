#include "main.h"

int actual_prime(int n, int i);
/**
*is_prime_number - indicates a prime number
*@n: integer
*Return: 1 if n is prime number, 0 if otherwise
*/
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (actual_prime(n, n - 1));
}

/**
*actual_prime - calculates if num is prime
*@n: integer
*@i: counter
*Return: 1 if n is prime number, 0 if otherwise
*/
int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
