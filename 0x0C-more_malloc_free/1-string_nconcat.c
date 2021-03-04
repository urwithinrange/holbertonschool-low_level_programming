#include "holberton.h"
/**
  *string_nconcat - concats 2 strings
  *@s1: the OG string
  *@s2: the string to be added
  *@n: the number of elements from s2 to use
  *Return: the pointer to new string
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	size_t i, len, len2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (len = 0; s1[len] != 00; len++)
		continue;
	for (len2 = 0; s2[len2] != 00; len2++)
		continue;
	if (n > len2)
		(n = len2);
	s = malloc(sizeof(char) * (len + n));
	if (s == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
		s[i] = s1[i];
	for (i = 0; i < n; i++)
		s[len + i] = s2[i];
	s[len + i] = 00;
	return (s);
}
