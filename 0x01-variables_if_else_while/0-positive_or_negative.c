#include<stdlib.h>
#include<time.h>
#include<stdio.h>
/**
  *main - entry point
  *Description - function that prints the pos or neg or zero number
  *Return: 0 on sucess
  */
int main(void)
{
int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	{
	if (n > 0)
		printf("%d is positive", n);
	else if (n < 0)
		printf("%d is negative", n);
	else
		printf("%d is zero", n);
	}
	putchar('\n');
return (0);
}
