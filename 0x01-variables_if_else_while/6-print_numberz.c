#include <stdio.h>
/**
 * main - prints all single digits
 *
 * Return: Value 0 successful
 */
int main(void)
{
	char number;

	number = '0';
	while (number <= '9')
	{
		putchar(number);
		number++;
	}
	putchar('\n');
	return (0);
}
