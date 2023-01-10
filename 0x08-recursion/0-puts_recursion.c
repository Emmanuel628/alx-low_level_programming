#include "main.h"

/**
 * _puts_recursion - a funtion that prints a string followed by newline
 * @s: the string to be printed
 * Return: returns nothing
 */
void _puts_recursion(char *s)
{

	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion((s + 1));
}