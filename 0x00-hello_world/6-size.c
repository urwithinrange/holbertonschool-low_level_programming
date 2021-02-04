#include<stdio.h>
/**
  *main - Entry point
  *
  *Return: 0 on success
  */
int main(void)
{
int n;

	printf("Size of a char: %d byte(s)\n", n = sizeof(char));
	printf("Size of an int: %d byte(s)\n", n = sizeof(int));
	printf("Size of a long int: %d byte(s)\n", n = sizeof(long));
	printf("Size of a long long int: %d byte(s)\n",n = sizeof(long long));
	printf("Size of a float: %d byte(s)\n", n = sizeof(float));
	return (0);
}

