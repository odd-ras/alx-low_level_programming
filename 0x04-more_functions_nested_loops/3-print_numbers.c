#include "main.h"

/**
 * print_numbers - prints numbers 0 to 9
 * followed by a new line
 * @i: integer to iterate
 * Return: void
 */
void print_numbers(void)
{
	char i;

	i = 0;
	while (i < 10)
	{
		_putchar(i + '0');
		i++;
	}
	_putchar('\n');
}