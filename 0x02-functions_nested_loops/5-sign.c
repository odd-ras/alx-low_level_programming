#include "main.h"

/**
 * print_sign - main entry
 * Description: Prints the sign of a number
 * Returns 1 and prints + if positive number
 * Returns 0 and prints 0 if zero
 * Returns -1 and prints - if negative
 *
 * Return: 0
 */
int print_sign(int n)
{
	int n;

	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
