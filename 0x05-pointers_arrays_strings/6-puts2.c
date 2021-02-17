#include "holberton.h"
/**
  *puts2 - prints every other character of a string
  *@str: the string passed
  *Return: void
  */
void puts2(char *str)
{
	int n;

	for (n = 0; str[n] != '\0'; n++)
	{
		_putchar(str[n]);
		if (str[n + 1] != '\0')
			n++;
	}

	_putchar('\n');
}
