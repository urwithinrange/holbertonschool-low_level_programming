#include "holberton.h"
#include <stdlib.h>
/**
  *main - entry point
  *Description: multiplies two numbers
  *@argc: the number of arguments
  *@argv: the numberts to be multiplied
  *Return: 0 on sucess and 1 for error
  */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
