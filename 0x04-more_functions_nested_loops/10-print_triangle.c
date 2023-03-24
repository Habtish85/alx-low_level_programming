#include "main.h"

/**
 * print_triangle -  writes triangles using hashtag
 * @size: the height and base of the traingle
 * return: a triangle with size
 */

void print_triangle(int size)
{
	int i;
	int j;
	int k;

	if (size <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (i = 0; i < size; i++)
	{
	for (j = size - i; j > 1; j--)
	{
	_putchar(32);
	}
	for (k = 0; k <= i; k++)
	{
	_putchar(35);
	}
	_putchar('\n');
	}
	}
}
