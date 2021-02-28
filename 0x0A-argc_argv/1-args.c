#include "holberton.h"
/**
  *main - entry point
  *@argc: the number of arguments passed
  *@argv: the string segments of the argument
  *Return: 0 on sucess
  */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	int n = argc - 1;

	printf("%d\n", n);
	return (0);
}
