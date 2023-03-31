#include "main.h"
/**
 * _strncat - append *dest  and *src
 * @dest: string to be apennded to
 * @src: the secnd string from
 * @n: number of charters to appended
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int k;
	int destlen = 0;
	int srclen = 0;
	

	for (k = 0 ; dest[k] != '\0' ; k++)
		destlen++;
	for (k = 0 ; src[k] != '\0' ; k++)
		srclen++;
	for (k = 0 ; k < n ; k++)
		dest[destlen + k] = src[k];
	return (dest);
}
