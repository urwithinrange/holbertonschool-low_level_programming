#include "holberton.h"
/**
  *clear_bit - function that sets a variable to 0 at given index
  *@n: the number to be changed
  *@index: the index in the binary number to change
  *Return: 1 for successm -1 for fail
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
