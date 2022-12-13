#include <stdio.h>

/**
 * main - main entry
 * Description: Prints sum of multiples of 
 * 3 and 5 below 1024
 * Return: void
 */
int main(void)
{
	int i, z = 0;

	while (i < 1024)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			z += i;
		}

		i++;
	}

	printf("%d\n", z);
	return (0);
}
