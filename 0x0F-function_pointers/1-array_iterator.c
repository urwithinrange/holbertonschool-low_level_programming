#include "function_pointers.h"
/**
  *array_iterator - executes a function as a parameter on each element of arr
  *@array: the array to be passed
  *@size: the size of the array
  *@action: pointer to the functino to be used
  *Return: void
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (action == NULL || array == 00)
		return;
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
