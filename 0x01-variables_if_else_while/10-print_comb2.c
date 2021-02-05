#include <stdio.h>
/**
  *main - Entry point
  *Description - 10-print_comb2.c
  *
  *Return: 0 on success
  */
int main(void)
{
	int n, t;

	for (n = 0; n <= 9; n++)
	{
		for (t = 0; t <= 9; t++)
		{
			putchar(n + 48);
			putchar(t + 48);
			if (n != 9 || t != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
