/**
 * print_numbers - prints from 0 to 9
 * return: nothing
 */
void print_numbers(void)
{
	char num;

	num = '0';
	while (num >= '0' && num <= '9')
	{
		_putchar(num);
	}
	_putchar('\n');
}
