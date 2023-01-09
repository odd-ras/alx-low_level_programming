#include "main.h"

/**
 * _strlen - returns lenght of a string
 * @s: string
 * Return: void
 */
int _strlen(char *s)
{
	int j = 0;

	while (s[j])
		j++;

	return (j);

}
