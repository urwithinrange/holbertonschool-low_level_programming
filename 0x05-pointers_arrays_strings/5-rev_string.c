#include "holberton.h"
/**
  *rev_string - reverses a string
  *@s: the given string
  *Return: void
  */
void rev_string(char *s)
{
	int len, n = 0;
	char temp;

	for (len = 0; s[len] != '\0'; len++)
		continue;
	len--;
	for (;n < len; n++, len--)
	{
		temp = s[len];
		s[len] = s[n];
		s[n] = temp;
	}
}
