#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - searches string for a set of bytes
 * @s: pointer to be scanned
 * @accept: matching chars
 * Return: NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
