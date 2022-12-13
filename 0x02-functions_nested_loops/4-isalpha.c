#include "main.h"
#include <ctype.h>

/**
 * _isalpha - main entry
 * Description: checks for alphanumeric characters
 * Returns 1 if c is a letter
 * Returns 0 otherwise
 */
int _isalpha(int c)
{
	char c;

	if (isalpha(c) == 0)
	{
		_putchar('1');
	}
	else
	{
		_putchar('0')
	}
	return (0);
}
