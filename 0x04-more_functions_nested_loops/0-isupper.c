#include "main.h"

/**
 * _isupper - function that checks for uppercase character
 * @c: input character.
 * Return: 1 if it is upper character 0 if lower
 */
int _isupper(int c)
{
	char c;

	c = 'X';
	printf("%c: %d\n", c, _isupper(c));
	c = 'd';
	printf("%c: %d\n", c, _isupper(c));
	return (0);
}
