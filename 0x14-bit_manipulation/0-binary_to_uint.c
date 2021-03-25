#include "holberton.h"
/**
  *binary_to_uint - converts binary number to unsigned int
  *@b: the binary bumber
  *Return: the binary number converted to int
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int shift, i;

	if (!*b)
		return (0);
	for (shift = 0, i = 0; b[i] != 00; i++)
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
		if (b[i] == '1')
			shift = (shift << 1) | 1;
		if (b[i] == '0')
			shift = (shift << 1) | 0;
	}
	return (shift);
}
