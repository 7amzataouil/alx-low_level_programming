#include <stdio.h>
/**
 * main - prints all single digits
 *
 * Return: Value 0 successful
 */
int main(void)
{
	int number;

	number = 0;
	while (number <= 9)
	{
		putchar(number + '0');
		number++;
	}
	putchar('\n');
	return (0);
}
