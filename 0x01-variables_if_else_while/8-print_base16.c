#include <stdio.h>
/**
 * main -  this prints numbers in hexidecimal
 * Return: 0
 */

int main(void)
{
 	int i;
	char j;
	for (i = 0 ; i < 10 ; i++)
		putchar(i + '0');
        for (j = 'a' <= 'f' ; j++)
		putchar(j);
	putchar('\n');
	return (0);
}
