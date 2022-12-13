#include <stdio.h>

/**
 * main - entry point
 * Description: print sum of even valued terms
 * Return: void
 */
int main(void)
{
	int x = 0, y = 1, next = 0;
	int sum = 0;

	while (next < 4000000)
	{
		next = x + y;
		x = y;
		y = next;
		if (next % 2 == 0)
			sum += next;
	}
	printf("%i\n", sum);
	return (0);
}
