#include "main.h"
/**
 * _strncpy - copies n characters from *dest  to *src
 * @dest: the string to copy
 * @src: the source of the string
 * @n: number of characters to appended
 * Return: copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int k;

	for (k = 0 ; k < n ; k++)
		dest[k] = src[k];
	return (dest);
}
