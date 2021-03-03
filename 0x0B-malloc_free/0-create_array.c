#include "holberton.h"
/**
  **create_array - creates an array of chars, and initializes a specific char
  *@size: the length of the array
  *@c: the character being passed
  *Return: pointer to array of NULL if fail or 0
  */
char *create_array(unsigned int size, char c)
{
	unsigned int n;
	char *p;

	p = malloc((size + 1) * sizeof(char));

	if (p == NULL || size <= 0 || c == 00)
		return (NULL);
	for (n = 0; n < size; n++)
		p[n] = c;
	p[n] = '\n';
	return (p);
}
