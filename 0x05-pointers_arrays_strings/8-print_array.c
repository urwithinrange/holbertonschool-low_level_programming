#include "holberton.h"
/**
  * print_array - function that prints n elements of an array of int
  *@a: the array whole
  *@n: the intended print
  *Return: void
  */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i + 1 != n)
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}
	printf("\n");
}
