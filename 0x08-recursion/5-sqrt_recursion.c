#include "main.h"

/**
*sqrt_number - first called function
*@n: integer
*@x: integer
*Return: n and x
*
*/
int sqrt_number(int n, int x)
{
	if (x * x > n)
	{
		return (-1);
	}
	if ((x * x) == n)
	{
		return (x);
	}
	return (sqrt_number(n, x + 1));
}
/**
*_sqrt_recursion - second called function
*@n: integer
*Return: square root
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (sqrt_number(n, 0));
}
