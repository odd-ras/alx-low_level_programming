#include "main.h"

/**
 * main - prints a string of characters followed by a new line
 *
 * Description: print a string of characters followe by a new line
 *
 *
 * Return: void
 */

int main(void)
{
	char c[] = "_putchar\n";
	int i = 0;

	while (c[i] != '\0')
	{
		char str = c[i];

		_putchar(str);
		i++;
	}
	return (0);
}
