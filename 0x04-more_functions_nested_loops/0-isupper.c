#include "main.h"


/**
 * _isupper - check for upper case letters
 * @c: character to be checked
 * Return: void
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
