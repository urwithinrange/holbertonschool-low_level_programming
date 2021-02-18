#include "holberton.h"
/**
  *_strlen - function that returns the length of a string
  *@s: the string passed
  *Return: 0 on sucess
  */
int _strlen(char *s)
{
	int n;

	if (s == NULL)
		return (0);
	for (n = 0; s[n] != '\0'; n++)
		continue;
	return (n);
}
/**
  *_strcat - concats 2 strings
  *@dest: the finalt product
  *@src: the string to be added
  *Return: pointer to final string
  */
char *_strcat(char *dest, char *src)
{
	int i, dlen;

	dlen = _strlen(dest);

	for (i = 0; src[i] != '\0'; dlen++, i++)
		dest[dlen] = src[i];
	dest[dlen] = '\0';
	return (dest);
}
