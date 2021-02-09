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
  *print_number - prints the numbers
  *@n: the number being tested
  *Return: void
  */
void print_number(int n)
{
	if (n < 0)
		_putchar('-');
	if (n == 98)
	{
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
		_putchar('\n');
	}
	if (n <= 0)
		n = _abs(n);
	if (n < 10)
	{
		_putchar(n + '0');
		_putchar(',');
		_putchar(' ');
	}
	else if (n < 100 && n > 9 && n != 98)
	{
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
		_putchar(',');
		_putchar(' ');
	}
	else if (n >= 100)
	{
		_putchar((n / 100) + '0');
		_putchar(n / 10 % 10 + '0');
		_putchar((n % 10) + '0');
		_putchar(',');
		_putchar(' ');
	}
}
/**
  *print_to_98 - function that prints all natural numbers from n to 98
  *@n: the number being started from
  *
  *Retrun: void
  */
void print_to_98(int n)
{
	if (n < 98)
		while (n < 98)
		print_number(n++);
	if (n > 98)
		while (n > 98)
		print_number(n--);
	if (n == 98)
		print_number(n);
}
