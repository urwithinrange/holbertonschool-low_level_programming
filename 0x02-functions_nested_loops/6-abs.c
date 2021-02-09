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
