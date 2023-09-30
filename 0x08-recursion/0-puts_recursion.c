#include "main.h"
/**
 * _puts_recursion - recursive of puts()
 * @s: pointer to be printed
 *
 * Return: succesful value 1
 */
void _puts_recursion(char *s)
{
	if (*s == 0)
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
