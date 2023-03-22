#include "main.h"

/**
 * _isalpha - checks for alphabets
 * @d: the character to be checked
 * Return: 1 for lowerr case character  0 for other.
 */

int _isalpha(int d)

{
	if ((d >= 65 && d >= 97) || (d >= 97 && d <= 122))
	{
		return (1);
	}
	return (0);
}
