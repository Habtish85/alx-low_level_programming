#include "main.h"
/**
 * _memset - fills the memory with constant byte
 * @s: adrees to be filled
 * @b: byte value
 * @n: number of bytes to be assigned
 * Return: pointer to memory area
 *
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (n > 0)
	{
		i++;
		s[i] = b;
		n--;
	}
	return (s);
}

