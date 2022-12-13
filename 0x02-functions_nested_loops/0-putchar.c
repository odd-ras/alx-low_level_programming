#include "main.h"

/**
 * main - prints a string of characters followed by a new line
 *
 * Description: print a string of characters followe by a new line
 *
 *
 * Return: 0
 */

int main(void)
{
	char x[] = "_putchar\n";

	for (int i = 0; i < sizeof(x); i++)
	{
		_putchar(x[i]);
	}

	return (0);
}

