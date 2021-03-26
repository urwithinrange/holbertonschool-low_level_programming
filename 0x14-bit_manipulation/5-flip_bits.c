#include "holberton.h"
/**
  *flip_bits - function returns the number of bits from A to B
  *@n: the first number to compare
  *@m: the second numnber to compare
  *Return: the number of numbers that would have to flip to convert
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i = 0, count;

	i = (n ^ m);
	for (count = 0; i > 0; count++)
		i &= (i - 1);
	return (count);
}
