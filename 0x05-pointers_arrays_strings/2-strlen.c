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
