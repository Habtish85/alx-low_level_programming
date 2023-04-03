#include "main.h"

/**
 * _memcpy -  copies memory area
 * @src: memory area source
 * @dest: memory area destination
 * @n: amount to be copied in bytes
 * return: destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;
	int j = n; 

	i = 0 ; 
	while (i < j) 
	{
		i++;
		src[i] = dest[i];
		n--;
	}
	return (dest);
}

