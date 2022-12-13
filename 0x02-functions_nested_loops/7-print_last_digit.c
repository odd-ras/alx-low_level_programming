#include "main.h"

/**
 * print_last_digit - main entry
 * @n: an integer
 * Description: prints last digit of a number
 * Return: 0
 */
int print_last_digit(int n)
{
	int x = n % 10;

	if (n < 0)
	{
		x *= -1;
	}
	_putchar(x + '0');

	return (x);
}
