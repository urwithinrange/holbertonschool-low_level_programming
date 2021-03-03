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
	int len_s1, len_s2, len, i, n = 0;
	char *cat;

	len_s1 = _strlen(s1);
	len_s2 = _strlen(s2);
	len = len_s1 + len_s2;
	len_s1--;
	len_s2--;
	cat = malloc(sizeof(char) * (len + 1));
	if (cat == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
	{
		if (i <= len_s1)
			cat[i] = s1[i];
		else if (i <= len)
		{
			cat[i] = s2[n];
			n++;
		}
		else
			cat[i] = 00;
	}
	return (cat);
}
