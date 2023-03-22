/**
 * islower - checks for lowercase
 * @d: the character to be checked
 * Return: 1 for lowerr case character  0 for other.
 */
int _islower(int d)

{
	if (d >= 97 && d <= 122)
	{
	return (1);
	}
	return (0);
}
