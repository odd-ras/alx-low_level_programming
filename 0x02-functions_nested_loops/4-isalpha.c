#include "main.h"
#include <ctype.h>

/**
 * _isalpha - main entry
 * @c: char
 * Description: checks for alphanumeric characters
 * Returns 1 if c is a letter
 * Returns 0 otherwise
 * Return: 1 or 0
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
	return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
