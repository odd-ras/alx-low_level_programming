#include "main.h"

#include <stdio.h>
#include <stdlib.h>

/**
 * print_number - prints numbers
 * @n: number to print
 *
 * Return: void
 */
void print_number(int n)
{

	unsigned int x = 0;

	if  (n < 0)
	{
		x = -n;
		_putchar('-');
	}

	else
	{
		x = n;
	}

	if (x / 10)
	{
		print_number(x / 10);
	}

	_putchar((x % 10) + '0');
}
