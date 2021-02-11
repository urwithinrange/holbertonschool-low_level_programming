#include "holberton.h"
/**
  *print_line - draw line in terminal
  *@n: the length of the line
  *Return: void
  */
void print_line(int n)
{
	int i = 0;

	for (; i < n; i++)
		_putchar('_');
	_putchar('\n');
}
