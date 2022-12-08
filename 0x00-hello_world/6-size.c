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
	char charType;
	int intType;
	long longType;
	long long longerType;
	float floatType;

	printf("Size of a char: %zu byte(s)\n", sizeof(charType));
	printf("Size of an int: %zu byte(s)\n", sizeof(intType));
	printf("Size of a long int: %zu byte(s)\n", sizeof(longType));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(longerType));
	printf("Size of a float: %zu byte(s)\n", sizeof(floatType));

	return (0);
}
