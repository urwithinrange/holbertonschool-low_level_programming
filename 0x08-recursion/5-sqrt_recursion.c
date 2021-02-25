#include "holberton.h"
/**
  *_sqrt - helpor function to find sq rt
  *@n: the number to check
  *@i: the starting point
  *Return: the square root of a number
  */
int _sqrt(int n, int i)
{
	if (n / i == i)
		return (i);
	else if (n > 0)
		return (_sqrt(n, i + 1));
	else
		return (-1);
}

/**
  *_sqrt_recursion - finds the sq rt of a given number
  *@n: the number to sq rt
  *
  *Return: the natural sq rt of a number, or -1 for fail
  */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
