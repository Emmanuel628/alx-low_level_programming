#include <stdio.h>

/**
 * main - The prime factors of 1231952 are 2, 2, 2, 2, 37 and 2081.
 * Return: 0
 */
int main(void)
{
	long int n, fp;

	n = 612852475143;
	for (fp = 2; fp <= n; fp++)
	{
		if (n % fp == 0)
		{
			n /= fp;
			fp--;
		}
	}
	printf("%1d\n", fp);
	return (0);
}
