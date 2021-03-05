#include "holberton.h"
/**
  *
  *
  *
  *
  */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *newstr;

	if (ptr == NULL)
	{
		newstr = malloc(new_size);
		if (newstr == NULL)
			return (NULL);
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
