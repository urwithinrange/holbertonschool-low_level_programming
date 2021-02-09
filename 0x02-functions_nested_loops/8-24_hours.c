#include "holberton.h"
/**
  *jack_bauer - function that prints every minute of the day of Jack Bauer
  *
  *Return:
  */
void jack_bauer(void)
{
	int h, m;

	h = 0;
	for (; h < 24; h++)
	{
		m = 0;
		for (; m < 60; m++)
		{
			_putchar('0' + (h / 10));
			_putchar('0' + (h % 10));
			_putchar(':');
			_putchar('0' + (m / 10));
			_putchar('0' + (m % 10));
			_putchar('\n');
		}
	}
}
