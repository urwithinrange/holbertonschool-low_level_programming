#include "holberton.h"
/**
  *_calloc - allocates mem for an array
  *@nmemb: elements of array
  *@size: number of bytes
  *Return: pointer to the allocated mem
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	size_t i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		p[i] = '\0';
	return (p);
}

