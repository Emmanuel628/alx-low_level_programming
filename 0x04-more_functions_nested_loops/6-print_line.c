#include "main.h"

/**
 * print_line - function that draws a straight line in the terminal.
 *
 * @n: number of staight line
 * Return: 0
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
