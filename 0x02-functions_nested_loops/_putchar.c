#include <main.h>
#include <unistd.h>

/**
 * _putchar - Take a character as a parametre
 *
 * Return: Prints the passed character to the stdout.
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}

