#include "holberton.h"
/**
  *factorial - returns the factorial of a given number
  *@n: the number to factorialed
  *
  *Return: the factorial of a given number or - 1 if an error
  */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	return (n * (factorial(n - 1)));
}
