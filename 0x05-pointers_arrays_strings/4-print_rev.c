#include "main.h"

/**
 * print_rev - print string in reverse
 * @s: string pointer
 * Return: void
 */
void print_rev(char *s)
{
	int j = 0;

	while (s[j])
	{
		j++;
	}

	while (j--)
	{
		_putchar(s[j]);
	}

	_putchar('\n');
}
