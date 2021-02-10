#include "holberton.h"
/**
  *print_last_digit -function that prints the last digit of a number
  *@n: the number being passed
  *Return: the last digit of the number
  */
int print_last_digit(int n)
{

	if (n < 0)
		n = (n - (n * 2));	
	n = n % 10;
	_putchar(n + '0');
	return (n);
}
