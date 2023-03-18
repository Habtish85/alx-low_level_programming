#include <stdio.h>
/**
 * main -  this prints numbers from 0 to 9
 * Return: 0
 */

int main(void)
{
	char i;

	for (i = 'z' ; i >= 'a' ; i--)
		putchar(i);
	putchar('\n');
	return (0);
}

