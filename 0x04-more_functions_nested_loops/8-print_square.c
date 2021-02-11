#include "holberton.h"
/**
  *print_square - prints a square
  *@size: the size of square to build
  *Return: void
  */
void print_square(int size)
{
	int col, row;

	if (size < 1)
		_putchar('\n');
	for (row = 1; row <= size; row++)
	{
		for (col = 1; col <= size; col++)
		{
			_putchar('#');
			if (col == size)
				_putchar('\n');
		}
	}
}
