#include "holberton.h"
/**
  * get_bit - returns the value at a given index
  *@n: the number to be indexed thru
  *@index: the index of the number, starting from 0 of the bit to get
  *Return: the value of the bit at the index index or -1 for error
  */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = 0;

	if (index > 63)
		return (-1);
	/*convert n to binary*/
	i = (n >> index) & 1;
	return (i);
}
