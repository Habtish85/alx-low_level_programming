#include <unistd.h>
/*
 *_putchar - wites the character p
 *Return: 1 in success
 */

int _putchar(char p)

{
	return (write(1, &p, 1));
}
