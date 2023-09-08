#include <stdio.h>
/**
 * main - Prints the alphabets using putchar
 *
 * Return: Value 0 seccessful
 */
int main(void)
{
	char i;

	i = 'a';
	while (i <= 'z')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
