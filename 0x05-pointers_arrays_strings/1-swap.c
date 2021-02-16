#include "holberton.h"
/**
  *swap_int - function that swaps the values of two int
  *@a: the first int passed
  *@b: the second int passed
  *Return: void
  */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}


