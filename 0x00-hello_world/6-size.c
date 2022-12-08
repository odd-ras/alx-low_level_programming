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
	char char_type;
	int int_type;
	long long_type;
	long long longer_type;
	float float_type;

	printf("Size of a char: %zu byte(s)\n", sizeof(char_type));
	printf("Size of an int: %zu byte(s)\n", sizeof(int_type));
	printf("Size of a long int: %zu byte(s)\n", sizeof(long_type));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(longer_type));
	printf("Size of a float: %zu byte(s)\n", sizeof(float_type));

	return (0);
}
