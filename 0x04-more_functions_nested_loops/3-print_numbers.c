#include "main.h"

/**
 * print_numbers - prints numbers from 0-9
 * Return: void
 */
void print_numbers(void)
{
	int h;

	for (h = 0; h < 10; h++)
	{
		_putchar(h + '0');
	}
	_putchar('\n');
}
