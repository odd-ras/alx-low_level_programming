#include"main.h"

/**
 * _islower - main entry
 * @c: int
 * Description: checs for lowercase characters
 *
 * Return: 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
