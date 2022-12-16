#include <stdio.h>

/**
 * main - The prime factors of 1231952 are 2, 2, 2, 2, 37 and 2081.
 * Return: 0
 */
int main(void)
{
	long int n, pf;

	n = 612852475143;
	for (pf = 2; pf <= n; pf++)
	{
		if (n % pf == 0)
		{
			n /= pf;
			pf--;
		}
	}
	printf("%1d\n", pf);
	return (0);
}
