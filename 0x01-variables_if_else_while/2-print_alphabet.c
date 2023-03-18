#include <stdio.h>
/**
 * main - this program prints  the alphabet, without using printf or put
 * Return: 0  is correct
 */
int main(void)

{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
