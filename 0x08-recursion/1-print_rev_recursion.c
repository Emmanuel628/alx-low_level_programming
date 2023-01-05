#include "main.h"
#include <string.h>

/**
 * _print_rev_recursion - Prints a string in reverse
 * @s: The string to be printed
 * Return: return nothing
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
