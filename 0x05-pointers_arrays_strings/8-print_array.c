#include "main.h"

/**
 * print_array - prints elements of an array
 * @a: int pointer
 * @n: integer
 * Return: void
 */
void print_array(int *a, int n)
{
	int j = 0;
	
	while (j < n)
	{
		printf("%d", a[j]);

		if (j < n - 1)
		{
			printf(",");
		}
		j++;
	}

	printf("\n");	
}
