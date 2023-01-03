#include "main.h"

/**
 *  * *_memset - fill memory with a constant byte
 * @s: target pointer
 * @b: filler constant
 * @n: filler iterations
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		s[i] = b;
	}

	return (s);
}
