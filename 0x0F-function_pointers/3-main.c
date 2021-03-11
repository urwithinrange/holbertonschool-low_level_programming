#include "3-calc.h"
/**
  * main - Entru point
  * @ac: the humber of arguments
  * @av: the argument contents
  * Return: 0 on sucess
  */
int main(int ac, char **av)
{
	int num1, num2;
	int (*s)(int, int);

	if (ac != 4)
	{
		printf("Error\n");
		exit(98);
	}
	s = get_op_func(av[2]);
	if (s == NULL || strlen(av[2]) > 1)
	{
		printf("Error\n");
		exit(99);
	}
	num1 = atoi(av[1]);
	num2 = atoi(av[3]);
	if (num2 == 0 && (*av[2] == '/' || *av[2] == '%'))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", s(num1,num2));
	return (0);
}

