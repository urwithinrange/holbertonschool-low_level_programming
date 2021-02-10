#include "holberton.h"
/**
  *print_last_digit -function that prints the last digit of a number
  *@n: the number being passed
  *Return: the last digit of the number
  */
int print_last_digit(int n)
{
	n = n % 10;
	if (n < 0)
		n *= -1;
	_putchar(n + '0');
	return (n);
}
