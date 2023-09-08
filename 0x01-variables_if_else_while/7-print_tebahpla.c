#include <stdio.h>
/**
 * main - prints alphabets in reverse
 *
 * Return: Value 0 successful
 */
int main(void)
{
	char c;

	c = 'z';
	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
