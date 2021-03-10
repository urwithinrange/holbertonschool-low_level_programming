#include "function_pointers.h"
/**
  *int_index - searches for and integer
  *@array: the array to be passed for comparasion
  *@size: the number of elements int he array
  *@cmp: pointer to a function to compare values
  *Return: index of the first element for which cmp does not return 0
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, n;

	if (size <= 0 || array == 00 || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		n = cmp(array[i]);
		if (n == 1)
			break;
	}
	if (n == 0)
		return (-1);
	return (i);
}
