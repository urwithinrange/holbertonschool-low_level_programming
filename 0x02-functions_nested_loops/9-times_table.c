#include "holberton.h"
/**
  *times_table - function that prints the 9 times table, starting with 0
  *
  *Return: void
  */
void times_table(void)
{
	int r, c, n;

	for (c = 0; c <= 9; c++)
	{
		r = 0;
		for (r = 0; r <= 9; r++)
		{
			n = r * c;
			if (n < 10)
			{
				_putchar(' ');
				_putchar('0' + n);
				if (r < 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			else
			{
				_putchar('0' + n / 10);
				_putchar('0' + n % 10);
				if (r < 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
		}
	_putchar('\n');
	}
}
