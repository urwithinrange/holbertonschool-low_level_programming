#include "holberton.h"
/**
  *main - Entry point
  *Description - use _putchar to print alphabet
  *Return: 0 upon sucess
  */
int main(void)
{
	char a;

	for (a = 97; a <= 122; a++)
		_putchar(a);
	_putchar('\n');
	return (0);
}
