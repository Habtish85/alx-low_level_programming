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

	k = 0;
	while (k < n && src[k] != '\0')
	{
		dest[k] = src[k];
		k++;
	}
	while (k < n)
	{
		dest[k] = '\0';
		k++;
	}
	return (dest);
}
