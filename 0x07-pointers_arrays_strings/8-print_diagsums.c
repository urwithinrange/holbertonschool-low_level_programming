#include "holberton.h"
/**
  *print_diagsums - prints the sum of two diagonals of a square matrix of int
  *@a: the array passed
  *@size: the size of array
  *Return: void
  */
void print_diagsums(int *a, int size)
{
	int i, j, n1 = 0, n2 = 0;

	for (i = (size - 1); i < size * size - 1; i += (size - 1))
		n2 += a[i];
	for (j = 0; j < size * size; j += (size + 1))
		n1 += a[j];
	printf("%d, %d\n", n1, n2);
}
