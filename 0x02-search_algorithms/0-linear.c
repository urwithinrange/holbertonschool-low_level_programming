#include "search_algos.h"
/**
 *linear_search - function that searches for a value in an array of integers
 *@array: the first element of the array to be searched
 *@size: the number of ints in the array
 *@value: the int being searched for
 *Return: the first index where the value is located or -1 for fail
 */
int linear_search(int *array, size_t size, int value)
{
	unsigned int i;

	if (array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			printf("Value checked array[%d] = [%d]\n", i, array[i]);
			if (array[i] == value)
			{
				return (i);
			}
		}
	}
	return (-1);
}

