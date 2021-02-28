#include "holberton.h"
#include <stdlib.h>
/**
  *main - entry point
  *Description: prints the sum of argvs
  *@argc: the number of arguments
  *@argv: the segments or the argument
  *Return: 0 on sucess 1 on error
  */
int main(int argc, char *argv[])
{
	int i, j, n = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != 00; j++)
			if (argv[i][j] < 48 || argv[i][j] > 57)
			{
				printf("Error\n");
				return (1);
			}
			else
				continue;
		n += atoi(argv[i]);
	}
	printf("%d\n", n);
	return (0);
}
