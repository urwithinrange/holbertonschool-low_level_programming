#include "holberton.h"
/**
  *_islower - checks to see if char is lowercase
  *@c: the ascii being checked
  *Description - use _islower to determine if passed int ascii is lowercase
  *Return: 0 for caps, 1 for lowercase
  */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
