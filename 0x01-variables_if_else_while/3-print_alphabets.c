#include <stdio.h>
/**
  *main - Entry point
  *
  *Return: 0 on sucess
  */
int main(void)
{
	char a, b;

	for (a = 97; a <= 122; a++)
		putchar(a);
	for (b = 65; b <= 90; b++)
		putchar(b);
	putchar('\n');
return (0);
}
