#include "main.h"

/**
 *print_most_numbers - prints the numbers 0 to 9
 * followed by new line
 *skips 2 and 4
 *@i: variable
 *Return: 0
 */
void print_most_numbers(void)
{
	char i = 0;

	while (i <= 9)
	{
		if (i != 4 && i != 2)
		{
			_putchar(i + '0');
		}
		i++;
	}
	_putchar('\n');
}

