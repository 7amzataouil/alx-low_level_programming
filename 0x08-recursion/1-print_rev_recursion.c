#include "main.h"
/**
 * _print_rev_recursion - Prints reversed string
 * @s: string will beprinted.
 */
void _print_rev_recursion(char *s)
{
	if (s == NULL)
		return;

	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}