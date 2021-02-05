#include <stdio.h>
/**
  *main - entry point
  *
  *
  *Return: 0 on success
  */
int main(void)
{
	int n, n2, n3, f = 0, s = 1, t = 2;

	for (n3 = f; n3 <= 9; n3++)
	{
		for (n2 = s; n2 <= 9; n2++)
		{
			for (n = t; n <= 9; n++)
			{
			if ((n3 && n2) == n || (n2 == n) || n3 == n)
				;
			else
			{
				putchar(n3 + 48);
				putchar(n2 + 48);
				putchar(n + 48);
				if (n3 < 7 && n2 <= 8 && n <= 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
			}
		s++;
		t = (s + 1);
		}
	f++;
	s = (f + 1);
	t = (s + 1);
	}
	putchar('\n');
	return (0);
}
