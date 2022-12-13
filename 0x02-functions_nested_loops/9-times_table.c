#include "main.h"

/**
 * times_table - main entry
 * Description: prints the 9 times table
 * starting with 0
 * Return: void
 */
void times_table(void)
{
	int row, col, prod, tens, ones;

	for (row = 0; row <= 9; row++)
	{
		for (col = 0; col <= 9; col++)
		{
			prod = row * col;
			tens = prod / 10;
			ones = prod % 10;

			if (col == 0)
			{
				_putchar('0');
			}
			else if (prod < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(ones + '0');
			}
		else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(tens + '0');
				_putchar(ones + '0');
			}
		}
		_putchar('\n');
	}
}
