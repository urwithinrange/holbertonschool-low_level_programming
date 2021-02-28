#include "holberton.h"
/**
  *main - entry point
  *Description; prints all arguments is recieves
  *@argc: the number of arguments
  *@argv: the segment strings
  *Return: 0 on sucess
  */
int main(int argc, char *argv[])
{
	int n;

	for (n = 0; n < argc; n++)
		printf("%s\n", argv[n]);
	return (0);
}
