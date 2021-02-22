#include "holberton.h"
/**
  **_strpbrk - searches a string for any of a set of bytes.
  *@s: the string searched
  *@accept: the string of char bytes to stop at
  *Return: the mod string
  */
char *_strpbrk(char *s, char *accept)
{
	int j;

	for (; *s != '\0'; s++)
		for (j = 0; accept[j] != '\0'; j++)
			if (*s == accept[j])
				return (s);
	return (NULL);
}
