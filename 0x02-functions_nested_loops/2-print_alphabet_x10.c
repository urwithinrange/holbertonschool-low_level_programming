#include "holberton.h"
/**
 *print_alphabet_x10 - 10 times the alphabet, in lowercase, followed by \n
 *Description - use _putchar to print alphabet
 *Return: void
 */
void print_alphabet_x10(void)
{
	char c;
	int n;

	for (n = 0; n <= 9; n++)
	{
		c = 'a';
		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);
		_putchar('\n');
	}
}
