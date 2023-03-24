#include "main.h"
/**
 * more_numbers -  prints the numbers 0-14 ten times
 * Return: the numbers written
 */

void more_numbers(void)
{
int i;
int j;

for (j = 0 ; j < 10 ; j++)
	{
	for (i = 0 ; i < 15 ; i++)
		{
		if (i > 9)
			{
			_putchar((i / 10) + '0');
			}
		_putchar((i % 10) + '0');
		}
	_putchar('\n');
	}
}

