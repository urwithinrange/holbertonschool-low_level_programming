#include "holberton.h"
/**
  *print_most_numbers - function that prints the numbers, 0,1,3,4-9
  *
  *Return: 0 on success
  */
void print_most_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		if (n != 2 && n != 4)
			_putchar(n + '0');
	}
	_putchar('\n');
}
