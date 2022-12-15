#include "main"
#include <ctype.h>
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
	return (0);

}
