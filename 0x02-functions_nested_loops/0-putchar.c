#include <stdio.h>
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
	char c[] = "_putchar";

	for (int i = 0; i < sizeof(c); i++)
	{
		_putchar(c[i]);
	}

	return (0);
}

