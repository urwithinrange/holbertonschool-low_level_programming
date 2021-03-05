#include "holberton.h"
/**
  *array_range - creates an array of ints
  *@min: the starting number
  *@max: the ending number
  *Return: the new number array
  */
int *array_range(int min, int max)
{
	int i, n, *arr;

	if (min > max)
		return (NULL);
	n = max - min;
	arr = malloc(sizeof(int) * n);
	if (arr == NULL)
		return (NULL);
	i = 0;
	while (i < n)
	{
		arr[i] = min + i;
		i++;
	}
	return (arr);
}
