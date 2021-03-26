#include "holberton.h"
/**
  *print_binary - prints the binary representation of a number
  *@n: the number to be printed
  *Return: void
  */
void print_binary(unsigned long int n)
{
	char bin;

	if (n == 0)
	{
		_putchar ('0');
		return;
	}
	if (n == 1)
	{
		_putchar ('1');
		return;
	}
	if (n > 1)
	{
		/*C reads the number as binary*/
		print_binary(n >> 1);
		/* n compared to 1 */
		bin = ((n & 1) == 0 ? '0' : '1');
		_putchar(bin);
	}
}
