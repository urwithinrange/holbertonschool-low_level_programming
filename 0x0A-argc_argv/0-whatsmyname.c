#include "holberton.h"
/**
  *main - prints the program name
  *@argc: the number of arguments passed
  *@argv: the string segments of the argument
  *Return: 0 on sucess
  */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	if (argc > 1)
		return (1);
	return (0);
}
