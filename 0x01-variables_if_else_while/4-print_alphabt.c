#include <stdio.h>
/**
  *main - Entry point
  *
  *Return: 0 if successful
  */
int main(void)
{
	char a;

	for (a = 97; a <= 122; a++)
		if (a == 113 || a == 101)
			continue;
		else
			putchar(a);
	putchar('\n');
	return (0);
}
