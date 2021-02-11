#include "holberton.h"
/**
  *print_diagonal - function that draws a diagonal line
  *@n: the size of diagonal
  *Return: void
  */
void print_diagonal(int n)
{
	int i, s;

	if (n < 1)
		_putchar('\n');

	for (s = 1; s <= n; s++)
	{
		for (i = 1; i <= s; i++)
		{
			if (i < s)
				_putchar(' ');
			else if (i == s)
			{
				_putchar('\\');
				_putchar('\n');
			}
		}
	}
}
