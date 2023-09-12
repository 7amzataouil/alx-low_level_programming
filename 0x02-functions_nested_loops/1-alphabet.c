#include "main.h"
/**
 * print_alphabet - prints the alphabets
 * @c: character passed as a parameter 
 *
 * Return: Value 0 Successful
 */
void print_alphabet(void)
{
	char c;

	c = 'a';
	while(c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
	return (0);
}
