#include "main.h"

/**
 * print_square -  writes ladder vetically and horizontally equally
 * @size: the number of times the hashtag is written
 * return: hashtag n times
 */

void print_square(int size)
{
	int i;
	int j;

	if (size <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (i = 0 ; i < size ; i++)
	{
	for (j = 0 ; j < size ; j++)
	{
	_putchar(35);
	}
	_putchar('\n');
	}
	}
}
