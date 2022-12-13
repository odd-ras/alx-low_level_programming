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
	char letter = 'a';

	for (int i = 0; i < 10; i++)
	{
		while (letter <= 'z')
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
}
