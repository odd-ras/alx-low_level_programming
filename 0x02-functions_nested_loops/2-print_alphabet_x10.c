#include "main.h"

/**
 * print_alphabet_x10 - main entry
 * Description: prints lowercase alphabets
 * 10 times and then inserts new line
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char c;
	int i = 0;

	while (i <= 9)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}

		_putchar('\n');

		i++;
	}
}
