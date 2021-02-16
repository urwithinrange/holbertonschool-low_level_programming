#include "holberton.h"
/**
  *print_rev - prints a string in reverse
  *@s: the string being passed
  *Return: void
  */
void print_rev(char *s)
{
	int len, n;

	for (len = 0; s[len] != '\0'; len++)
		continue;
	for (n = len; n >= 0; n--)
		_putchar(s[n]);
	_putchar('\n');
}
