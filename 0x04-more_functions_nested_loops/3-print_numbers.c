#include "main.h"

/**
 * print_numbers - prints numbers 0 to 9
 * followed by a new line
 * @i: integer to iterate
 * Return: void
 */
void print_numbers(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		_putchar(i);
		i++;
	}
	_putchar("\n");
}
