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
	char n, c;
	int i = 0;


	while (i < 10)
	{
		for (n = 0; n <= 14; n++)
		{
			c = n;
			if (n > 9)
			{
				_putchar('1');
				c = n % 10;
			}

			_putchar('0' + c);
		}

		_putchar('\n');
		i++;
	}

}

