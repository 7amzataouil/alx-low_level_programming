#include <stdio.h>

/**
 * _isupper - check for uppercase letters
 * @c: char to check
 *
 * Return: Value 0 or Value 1
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
