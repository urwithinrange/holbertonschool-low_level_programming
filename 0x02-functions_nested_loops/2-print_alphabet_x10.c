#include "holberton.h"
/**
 *main - Entry point
 *Description - use _putchar to print alphabet
 *Return: 0 upon sucess
 */
int main(void)
{
	char c;
	int n;

	for(n = 0; n <= 9; n++)
	{
		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);
		_putchar('\n');
	}
return (0);
}
