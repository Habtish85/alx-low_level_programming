#include "main.h"

/**
 * _isupper - checks for lowercase
 * @d: the character to be checked
 * Return: 1 for lowerr case character  0 for other.
 */

int _isupper(int d)

{

	if (d >= 65 && d <= 90)
	{
		return (1);
	}
	return (0);
}
