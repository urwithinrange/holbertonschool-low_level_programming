#include "holberton.h"
/**
  *puts_half - prints the second half of a string
  *@str: the string being passed
  *Return: void
  */
void puts_half(char *str)
{
	int len, n;

	for (len = 0; str[len] != '\0'; len++)
		continue;
	if (len % 2 != 0)
		n = (len - 1) / 2;
	else
		n = len / 2;
	for (; str[n] != '\0'; n++)
		_putchar(str[n]);
	_putchar('\n');
}
