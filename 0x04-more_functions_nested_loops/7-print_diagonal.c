#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: integer
 * Return: void
 */
void print_diagonal(int n)
{
	int i = 0, j;

	while (i < n && n > 0)
	{
		j = 0;
		while (j < i)
		{
			_putchar(' ');
			j++;
		}

		_putchar('\\');
		_putchar('\n');
		j++;
	}
	if (i == 0)
		_putchar('\n');
}
