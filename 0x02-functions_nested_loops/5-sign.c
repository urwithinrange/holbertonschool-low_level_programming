#include "holberton.h"
/**
  *print_sign - checks to see the sign of a number
  *@n: the number being checked
  *
  *Return: 1 if < 0 0 = 0 or -1 > 0
  */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
