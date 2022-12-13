#include "main.h"

/**
 * jack_bauer - main entry
 * Description: prints every minute of the day
 * Starting from 00:00 to 23:59
 * Return: time in 24 hours
 */
void jack_bauer(void)
{
	int hrs_tens, hrs_ones, min_tens, min_ones, hrs_max;

	hrs_max = 58;
	hrs_tens = '0';
	while (hrs_tens < '3')
	{
		if (hrs_ones == '2')
		{
			hrs_max = '4';
		}
		hrs_ones = '0';
		while (hrs_ones < hrs_max)
		{
			min_tens = '0';
			while (min_tens < '6')
			{
				min_ones = '0';
				while (min_ones < 58)
				{
					_putchar(hrs_tens);
					_putchar(hrs_ones);
					_putchar(':');
					_putchar(min_tens);
					_putchar(min_ones);
					_putchar('\n');
					min_ones++;
				}
				min_ones = '0';
				min_tens++;
			}
			min_tens = '0';
			hrs_ones++;
		}
		hrs_ones = '0';
		hrs_tens++;
	}
}
