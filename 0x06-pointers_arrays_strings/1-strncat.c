#include "main.h"
/**
 * _strncat - append *dest  and *src
 * @dest: string to be apennded to
 * @src: the secnd string from
 * @n: number of charters to appended
 * Return: concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int k;
	int l;

	k = 0;
	while (dest[k] != '\0')
	{
		k++;
	}
	l = 0;
	while (l < n  && src[l] != '\0')
	{
	dest[k] = src[l];
	k++;
	l++;
	}
	dest[k] = '\0';
	return (dest);

}
