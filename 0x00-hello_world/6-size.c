#include <stdio.h>

/**
 * main - Entry point
 * @chartType: character
 * @intType: integer
 * @longType: long integer
 * @longerType: long long integer
 * @floatType: float
 *
 * Description: Prints the size of data types depending on where it is compiled
 * Return: 0 (Success)
 */
int main(void)
{
	printf("Size of a char: %zu byte(s)\n", sizeof(char));
	printf("Size of an int: %zu byte(s)\n", sizeof(int));
	printf("Size of a long int: %zu byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(long long int));
	printf("Size of a float: %zu byte(s)\n", sizeof(float));

	return (0);
}
