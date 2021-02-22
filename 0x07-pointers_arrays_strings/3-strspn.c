#include "holberton.h"
/**
  *_strspn - gets the length of a prefix substring
  *@s: the string passed
  *@accept: the bytes counted
  *Return: the numnber of bytes counted
  */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, n = 0;
	char *p = accept;

	for (i = 0; s[i] != 44 && s[i] != '\0'; i++)
		for (j = 0; p[j] != 00; j++)
			if (p[j] == s[i])
				n++;
	return (n);
}
