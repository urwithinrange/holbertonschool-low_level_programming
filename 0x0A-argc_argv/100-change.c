#include "holberton.h"
#include <stdlib.h>
/**
  *main - Entry point
  *Description: function that reduces an amount of cents to least amt of coin
  *@argc: number of arguments
  *@argv: the valus of cents
  *Return: 0 for success or 1 upon Error
  */
int main(int argc, char *argv[])
{
	int c = 0, t;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	t = atoi(argv[1]);
	if	(t < 1)
	{
		printf("0\n");
		return (0);
	}
	for (; t != 0; c++)
		{	
			if (t >= 25)
				t -= 25;
			else if (t >= 10)
				t -= 10;
			else if (t >= 5)
				t -= 5;
			else if (t >= 2)
				t -= 2;
			else
				t -= 1;
		}
	printf("%d\n", c);
	return (0);
}
