#include "main.h"
#include <studio.h>

/**
 * main - prints the numbers from 1 to 100
 * Return: Always 0.
 */
int main(void)
{
	int y;

	y = 1;

	for (y = 1; y <= 100; y++)
	{
	if ((y % 3 == 0) && (y % 5 == 0))
	{
		printf(" FizzBuzz");

	}
	else if (y % 3 == 0)
	{
		printf(" Fizz");
	}
	else if (y % 5 == 0)
	{
		printf(" Buzz");
	}
	else
	{
		printf(" %d", n);
	}
	if (y != 100)
	{
		printf(" ");
	}
	}
	printf("\n");
	return (0);
}
