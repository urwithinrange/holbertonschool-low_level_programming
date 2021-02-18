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
  * _strncpy - cpoies a string of n char
  * @dest: the final string
  * @src: the string to copy from
  * @n: the number of char to copy
  * Return: the final output
  */
char *_strncpy(char *dest, char *src, int n)
{
	int slen, i;

	slen = _strlen(src);
	if (slen > n)
		for (i = 0; i < n; i++)
			dest[i] = src[i];
	else
	{
		for (i = 0; src[i] != '\0'; i++)
			dest[i] = src[i];
		dest[i] = '\0';
	}
	return (dest);
}
