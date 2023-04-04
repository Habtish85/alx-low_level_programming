#include "main.h"

/**
 * _memcpy -  copies memory area from source
 * @src: memory area source
 * @dest: memory area destination
 * @n: amount to be copied in bytes
 * Return: destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

