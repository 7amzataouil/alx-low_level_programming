#include "main.h"

/**
 * _pow_recursion - raises x to power of y
 * @x: Integer
 * @y: The Power
 *
 * Return: 1 succesful
 * On error, -1 is returned
 */
int _pow_recursion(int x, int y)
{
	if (y < 0) /* input validation */
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
