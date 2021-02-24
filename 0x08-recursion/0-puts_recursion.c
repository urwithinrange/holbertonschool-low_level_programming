#include "holberton.h"
/**
  *_puts_recursion - prints a string followed by a new line
  *@s: the string passed
  *
  *Return: void
  */
void _puts_recursion(char *s)
{
	if (*s == 00)
		_putchar('\n');

	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

}
