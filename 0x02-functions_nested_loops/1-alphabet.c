#include "holberton.h"
/**
  *print_alphabet - prints alpha and a \n
  *Description - use _putchar to print alphabet
  *Return: void
  */
void print_alphabet(void)
{
	char a;

	for (a = 97; a <= 122; a++)
		_putchar(a);
	_putchar('\n');
}
