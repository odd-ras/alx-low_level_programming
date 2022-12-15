#include "main.h"

/**
 * more_numbers - prints 10 times the numbers 0 - 14
 * @i: iterable
 * @j: iterable
 * Return: 0
 */
void more_numbers(void)
{
	char i = 0;
	
	while (i < 9)
	{
		char j = 0;

		while (j < 14)
		{
			_putchar(j + '0');
			j++;
		}
		_putchar('\n');
		i++;
	}

	return (0);
}
