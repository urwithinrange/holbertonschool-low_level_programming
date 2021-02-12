#include "holberton.h"
/**
  *print_triangle - function that prints a triangle
  *@size: the size of the triangle
  *Return: void
  */
void print_triangle(int size)
{
	int c, r, s = size;

	if (size < 1)
		_putchar('\n');
	for (c = 1; c <= size; c++)
	{
		for (r = 1; r <= size; r++)
		{
			if (r >= s)
				_putchar('#');
			else
				_putchar(' ');
		}
		s--;
		_putchar('\n');
	}
}
