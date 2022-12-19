#include "main.h"

/**
 * *_strcpy - copies string
 * *dest: destination pointer
 * *src: source pointer
 */
char *_strcpy(char *dest, char *src)
{
	int j = -1;

	do{
		j++;
		dest[j] = src[j];
	} while (src[j] != '\0');

	return (dest);
}
