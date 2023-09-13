#include "main.h"
/**
 *_islow - check if character is lowercase
 *@c: the character will be checked
 *Return: 1 if lowercase, else 0
 *
 */
int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
