#include <stdio.h>
/**
 * main - Prints the alphabets using putchar
 *
 * Return: Value 0 seccessful
 */
int main(void)
{
        char i;
	char k;

        i = 'a';
	k = 'A';
        while (i <= 'z')
        {
                putchar(i);
                i++;
        }
	while (k <= 'Z')
	{
		putchar(k);
		k++;
	}
        putchar('\n');
        return (0);
}
