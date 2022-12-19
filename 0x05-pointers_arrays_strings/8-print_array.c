#include "main.h"

/**
 * print_array - prints elements of an array
 * @a: int pointer
 * @n: integer
 * Return: void
 */
void print_array(int *a, int n)
{
	int j;

	j = 0;
	for (n--; n >= 0; n--, j++)
	{
		printf("%d", a[j])9;
		if (n > 0)
		{
			printf(", ");
		}
	}	
	printf("\n");
}
