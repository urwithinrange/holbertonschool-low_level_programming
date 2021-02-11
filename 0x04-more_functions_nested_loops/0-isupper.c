#include "holberton.h"
/**
  *_isupper - func that checks for UC letter
  *@c: the given character
  *Return: 0 if letter is LC or 1 for UC
  */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
