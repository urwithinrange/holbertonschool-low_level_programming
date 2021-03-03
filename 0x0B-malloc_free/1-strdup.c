#include "holberton.h"
/**
  **_strdup - returns a pointer to a newly allocated space in memory
  *@str: the string to duplicate
  *
  *Return: pointer to dup string or NULL if str is NULL or insufficient memory
  */
char *_strdup(char *str)
{
	char *p;
	int n, len;

	if (str == NULL)
		return (NULL);
	for (len = 0; str[len] != 00; len++)
		continue;
	p = malloc(len * sizeof(char));
	if (p == NULL)
		return (NULL);
	for (n = 0; n <= len; n++)
		p[n] = str[n];
	return (p);
}
