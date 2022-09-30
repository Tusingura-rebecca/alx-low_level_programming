#include <stdio.h>

/**
* main - a program that print all the argumrnts it recieves
*@argc: count of arguments
*@argv:vector of arguments
*Return: 0
*/
int main(int argc, char *argv[])
{
	int n;

	for (n = 0; n < argc; n++)
		printf("%s\n", argv[n]);

	return (0);
}
