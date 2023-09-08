#include <stdio.h>
/**
 * main - prints all single digits
 *
 * Return: value 0 means successful
 */
int main(void)
{
	char num;

	num = '0';
	while (num <= '9')
	{
		putchar(num);
		num++;
	}
	putchar('\n');
	return (0);
}
