#include <stdio.h>
/**
 *main- Entry point
 *
 *Return: 0 on success
 */
int main(void)
{
	int n, t, c = 0, d = 0;

	for (n = 0; n <= 9; n++)
	{
		d++;
		for (t = d; t <= 9; t++)
		{
			if (n == c && n == t)
				continue;
			else
			{
				putchar(n + 48);
				putchar(t + 48);

				if (n <= 8 && t <= 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	c++;
	}
		putchar('\n');
	return (0);
}
