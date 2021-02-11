#include "holberton.h"
/**
 *_isdigit - func that checks if a number was passed
 *@c: the given number
 *Return: 0 if letter, 1 if number
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
