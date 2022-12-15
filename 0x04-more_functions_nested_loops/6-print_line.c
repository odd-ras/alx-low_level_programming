#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 *@n: integer
 * Return: void
 */
void print_line(int n)
{
	int x = 0;

	while (x < n && x > 0)
	{
		_putchar('_');
		x++;
	}
	_putchar('\n');
}
