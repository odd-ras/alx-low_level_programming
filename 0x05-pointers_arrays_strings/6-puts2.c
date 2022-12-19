#include "main.h"

/**
 * puts2 - prints every other string character
 * starting with first character, followed by new line
 * @str: char pointer
 * Return: void
 */
void puts2(char *str)
{
	int j = 0;

	while (str[j] != '\0')
	{
		if (j % 2 == 0)
		{
			_putchar(str[j]);
		}
		j++;
	}
	_putchar('\n');
}
