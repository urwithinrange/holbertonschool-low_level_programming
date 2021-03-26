#include "holberton.h"
/**
  *set_bit - sets the value of a bit to 1 at given index
  *@n: the number in binary form
  *@index: index of the binary number
  *Return: 1 on success or -1 for fail
  */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n |= (1 << index);
	return (1);
}
