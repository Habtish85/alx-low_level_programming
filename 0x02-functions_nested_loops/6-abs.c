#include "main.h"

/**
 * _abs - calculates the absolute value of the given number
 * @n: the integer to be calculated
 * Return: the abs or 0
 */
int _abs(int n)
{
	if (n < 0)
	{
	int abs_val;

	abs_val = n * -1;
	return (abs_val);
	}
	return (n);

}
