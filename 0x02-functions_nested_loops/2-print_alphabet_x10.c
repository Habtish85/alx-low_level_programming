#include "main.h"

/**
 * print_alphabet_x10 - prints all the letters in small caps 10 times
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char h;
	int i;

	while (i <= 9)
	{
		for (h = 'a'; h <= 'z'; h++)
		{
		_putchar(h);
		}
	_putchar('\n');
	i++;
	}

}

