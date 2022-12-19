#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string pointer
 * Return: void
 */
void rev_string(char *s)
{
	int len, j, half;
	char temp;

	for (len = 0; s[len] != '\0'; len++)
		;
	j = 0;
	half = len / 2;

	while (half--)
	{
		temp = s[len - j - 1];
		s[len - j - 1] = s[j];
		s[j] = temp;
		j++;
	}
}
