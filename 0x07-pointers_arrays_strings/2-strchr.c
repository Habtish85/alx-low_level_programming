#include "main.h"

/**
 *_strchr - a function that locates character in a string
 * @c: the character we are looking for
 * @s: the string the character is located in
 * Return: the character, or Null if character not found
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0 ; s[i] >= '\0' ; i++)
	{
		if (s[i] == c)
		return (s + i);
	}
	return ('\0');
}
