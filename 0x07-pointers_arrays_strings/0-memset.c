#include "holberton.h"
/**
  **_memset - fills memory with a constant byte
  *@s: the memory area pointed to
  *@b: the constant to be used for filling memory
  *@n: number of bytes in memory
  *Return: the mod memory
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
