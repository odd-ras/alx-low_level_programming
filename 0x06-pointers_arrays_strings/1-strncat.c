#include "main.h"

/**
 * *strncat - concantenates two strings
 * @dest: destination pointer
 * @src: source pointer
 * @n: integer
 * Return: void
 */
char *_strncat(char *dest, char *src, int n)
{
	int length, i;

	for (length = 0; dest[length] != '\0'; length++)
		;
	for (i = 0, i < n && src[i] != '\0'; i++)
	{
		dest[length + 1] = src[i];
	}

	return (dest);
}
