#include "holberton.h"
/**
  *_isalpha - the function to determine if a char is alpha
  *@c: is the char being tested
  *Return: 1 if c is a letter, 0 otherwise
  */
int _isalpha(int c)
{
	if ((c < 123 && c > 96) || (c > 64 && c < 91))
		return (1);
	else
		return (0);
}
