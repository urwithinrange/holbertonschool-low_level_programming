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
  **str_concat - adds one string to the end of another
  *@s1: the starting string
  *@s2: the string to be added
  *Return: NULL for fail
  */
char *str_concat(char *s1, char *s2)
{
	int len1, len2, len, i, n;
	char *cat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	len = len1 + len2;
	cat = malloc(sizeof(char) * (len + 1));
	if (cat == NULL)
		return (NULL);
	for (i = 0; s1[i] != 00; i++)
		cat[i] = s1[i];
	for (n = 0; s2[n] != 00; n++)
		cat[n + len1] = s2[n];
	return (cat);
}
