#include "main.h"

/**
 * _isdigit - checks for numbers
 * @d: the character to be checked
 * Return: 1 for lowerr case character  0 for other.
 */

int _isdigit(int d)

{
	if (d >= 48 && d <= 57)
	{
		return (1);
	}
	return (0);
}

