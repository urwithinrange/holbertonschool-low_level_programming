#include "holberton.h"
/**
  *_realloc - setting more memory for ptr
  *@ptr: the original pointer
  *@old_size: original size of ptr
  *@new_size: the size ptr needs to be increased to.
  *Return: newstr with newly set amount of memory.
  */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *newstr;

	if (ptr == NULL)
	{
		newstr = malloc(new_size);
		if (newstr == NULL)
			return (NULL);
		free(ptr);
		return (newstr);
	}

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	else
	{
		newstr = malloc(new_size);
		if (newstr == NULL)
			return (NULL);
	}
	free(ptr);
	return (newstr);
}
