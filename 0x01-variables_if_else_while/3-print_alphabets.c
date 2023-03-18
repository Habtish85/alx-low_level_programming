#include <stdio.h>
/**
 * main - this program prints the alphabet in both caps
 * Return: 0  is correct
 */
int main(void)

{
	char i;
	char j;

	for (i = 'a' ; i <= 'z' ; i++)
		putchar(i);
	for (j = 'A' ; j <= 'Z' ; j++)
		putchar(j);
	putchar('\n');
	return (0);
}

