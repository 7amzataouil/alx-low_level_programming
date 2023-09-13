#include "main.h"

/**
 * _isalpha - checks for alphabet character
 *
 * @c: the character will be checked
 *
 * Return: 1 if c is a letter or 0 for others
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
