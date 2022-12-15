#include "main.h"

/**
 * _isupper - A function that checks for uppercase character
 * @c: input character
 * Return: 1 if upper, 0 for other
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
