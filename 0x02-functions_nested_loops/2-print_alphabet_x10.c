#include "main.h"
/**
 * print_alphabet - prints the alphabets
 *
 * Return: Value 0 Successful
 */
void print_alphabet(void)
{
	char c;
	int i;

	i = 0;
	while (i < 10)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar ('\n');
		i++;
	}
}
