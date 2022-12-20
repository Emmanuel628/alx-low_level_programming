#include "main.h"

/**
 * _puts - print string
 * @str: sring will be printed
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
