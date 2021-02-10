#include "holberton.h"
/**
  *_abs - the absolute value of a number
  *Description - returns the absolute number
  *@n: the number being passed
  *Return: n as the absolute number
  */
int _abs(int n)
{
	if (n < 0)
	{
		n *= -1;
		return (n);
	}
	else
		return (n);
}

/**
  *print_last_digit -function that prints the last digit of a number
  *@n: the number being passed
  *Return: the last digit of the number
  */
int print_last_digit(int n)
{
	int av = _abs(n);

	av = av % 10;
	_putchar(av + '0');
	return (av);
}
