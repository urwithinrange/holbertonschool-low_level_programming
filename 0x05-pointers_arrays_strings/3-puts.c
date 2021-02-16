#include "holberton.h"
/**
  *_puts - prints a string followed by a new line
  *@str: the string being passed
  *Return: void
  */
void _puts(char *str)
{
	int n;

	for (n = 0; str[n] != '\0'; n++)
		_putchar(str[n]);
	_putchar('\n');
}
