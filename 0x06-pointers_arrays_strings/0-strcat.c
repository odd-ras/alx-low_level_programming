#include "main.h"

/**
 * *_strcat - concatenates two strings
 * @dest: destination pointer
 * @src: source pointer
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	for (j = 0; dest[j] != '\0'; j++, i++)
	{
		src[i] = dest[j];
	}
	src[i] = '\0';
	_putchar(src);

	return (0);
}
