#include"main.h"

/**
 * _islower - main entry
 * Description: checs for lowercase characters
 *
 * Return: 0
 */
int _islower(int c)
{
	int c;

	if (c >= 'a' && c <= 'z')
	{
		return(1);
	}
	else
	{
		return(0);
	}
}
