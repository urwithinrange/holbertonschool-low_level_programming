#include "holberton.h"
/**
  * *_strcmp - compares 2 strings
  * @s1: the first string
  * @s2: the second string
  * Return: the ascii value difference
  */
int _strcmp(char *s1, char *s2)
{
	for (; *s1 && *s2; s1++, s2++)
	{
		if (*s1 == *s2)
			continue;
		else
			return (*s1 - *s2);
	}
	return (0);
}
