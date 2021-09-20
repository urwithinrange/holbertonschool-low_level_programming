#include "search_algos.h"
/**
 *binary_search - function that searches for a value in a sorted array
 *@array: the first element of the array to be searched
 *@size: the number of elements in the array
 *@value: the value being searched for
 *Return: the first index where the value is located or -1 for fail
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1, mid, i;

	if (array != NULL)
	{
		while (left <= right)
		{
			mid = (left + right) / 2;
			printf("Searching in array: ");

			for (i = left; i < right; i++)
			{
				printf("%d, ", array[i]);
			}
			printf("%d\n", array[i]);
			if (array[mid] == value)
			{
				return (mid);
			}
			if (array[mid] < value)
			{
				left = mid + 1;
			}
			else if (array[mid] > value)
			{
				right = mid - 1;
			}
		}
	}
	return (-1);
}
