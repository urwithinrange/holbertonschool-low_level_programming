#include "holberton.h"
/**
  * _strncpy - cpoies a string of n char
  * @dest: the final string
  * @src: the string to copy from
  * @n: the number of char to copy
  * Return: the final output
  */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	if (i < n)
		dest[i] = '\0';
	return (dest);
}
