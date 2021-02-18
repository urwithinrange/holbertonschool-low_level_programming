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
  * *_strcmp - compares 2 strings
  * @s1: the first string
  * @s2: the second string
  * Return: pos # if s1 is longer, -# if s1 is less, and 0 if equal length
  */
int _strcmp(char *s1, char *s2)
{
	int s1len = _strlen(s1), s2len = _strlen(s2);

	if (s1len < s2len)
		return (-15);
	else if (s1len > s2len)
		return (15);
	else
		return (0);
}
