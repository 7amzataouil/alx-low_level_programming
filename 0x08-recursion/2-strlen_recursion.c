#include "main.h"
int _strlen_recursion(char *s)
/**
 * _strlen_recursion - Returns the length.
 * Return: String's length.
 */

{
	int len = 0;

	if (*s)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}

	return (len);
}
