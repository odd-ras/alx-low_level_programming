#include "main.h"

/**
 * string_toupper - lowercase to uppercase
 * @str: string
 * Return: void
 */
char *string_toupper(char *str)
{
	int index;

	index = 0;
	while (str[index])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
		{
			str[index] -= 32;
		}
		index++;
	}

	return (str);
}
