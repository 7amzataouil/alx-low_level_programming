#include <stdio.h>
/**
 * main - Prints the alphabets whitout 'q' & 'e'
 *
 * Return: Value 0 seccessful
 */
int main(void)
{
	char i;

	i = 'a';
	while (i <= 'z')
	{
		if (i == 'e' || i == 'q')
		{
			i++;
		}
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
