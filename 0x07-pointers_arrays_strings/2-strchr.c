#include "holberton.h"
/**
  **_strchr - locates a char in a string
  *@s: the string being checked
  *@c: the char being searched for
  *Return: modded string, or NULL if not found
  */
char *_strchr(char *s, char c)
{
	while (*s != c)
	{
		if (*s == '\0')
			return (NULL);
		s++;
	}
	return (s);
}
