#include <stdio.h>
/**
 * main - prints three digit combination of numbers but avoids any repitition
 * Return: 0 is correct
 */

int main(void)
{
	int i;
	int j;
	int k;

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = 1 ; j < 10 ; j++)
		{
			for (k = 2 ; k < 10 ; k++)
			{
				if (i < j && j < k && i != j && i != k && j != k)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(k + '0');
					if (i + j + k != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}