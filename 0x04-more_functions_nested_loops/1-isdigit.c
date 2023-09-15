/**
 * _isdigit - check if c digit or not
 *
 * @c: thing to be checked
 *
 * Return: Value 0 or Value 1
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);
	else
		return (0);
}
