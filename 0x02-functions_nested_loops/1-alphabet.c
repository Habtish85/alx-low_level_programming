#include "main.h"

/**
 * print_alphabet - prints all the letters of the alphabet in small caps
 * Return: void
 */
void print_alphabet(void)
{
	char h;

	for (h = 'a'; h <= 'z'; h++)
	{
		_putchar(h);
	}
	_putchar('\n');
}
