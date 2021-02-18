#include "holberton.h"
/**
  **_strncat -  concatenates two strings
  *@dest: the original string for base
  *@src: the string to be added
  *@n: bytes used from src
  *Return: the cat string
  */
char *_strncat(char *dest, char *src, int n)
{
	int dlen, i;

	for (dlen = 0; dest[dlen] != '\0'; dlen++)
		continue;
	for (i = 0; i < n && src[i] != '\0'; dlen++, i++)
		dest[dlen] = src[i];
	dest[dlen] = '\0';
	return (dest);
}
