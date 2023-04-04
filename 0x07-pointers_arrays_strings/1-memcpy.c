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
	int i = 0;
	int j = n;

	for (; i < j ; i++)
	{
		src[i] = dest[i];
		n--;
	}
	return (dest);
}

