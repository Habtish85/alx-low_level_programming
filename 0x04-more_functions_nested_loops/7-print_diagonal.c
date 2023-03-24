#include "main.h"

/**
 * print_diagonal -  writes backslash
 * @n: the number of times the backslash is written
 * return: backslash n times
 */

void print_diagonal(int n)
{

	int i;
	int j;

	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (i = 0 ; i < n ; i++)
	{
	for (j = 0 ; j < i ; j++)
	{
	_putchar(32);
	}
	_putchar(92);
	_putchar('\n');
	}
	}
}

