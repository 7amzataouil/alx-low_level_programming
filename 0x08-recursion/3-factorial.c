#include "main.h"

/**
 * factorial - the factorial of n
 * @n: integer number
 *
 * Return: value 1 succesful
 * On error, -1 is returned
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
