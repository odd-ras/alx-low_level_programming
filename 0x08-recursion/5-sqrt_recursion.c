#include "main.h"

/**
 * square - calculates sqr
 * @n: int
 * @val: square root
 * Return: int
 */

int square(int n, int val)
{

	if (val * val == n)
		return (val);
	else if (val * val < n)
		return  (square(n, val + 1));
	else
		return (-1);

}

/**
 * _sqrt_recursion - retuns natural sqrt
 * @n: int
 * Return: int
 */

int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

