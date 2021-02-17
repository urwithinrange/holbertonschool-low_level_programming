#include "holberton.h"
/**
  *_strcpy - copies the string pointed to
  *@dest: buffer pointed to
  *@src: the string pointed to
  *Return: *dest is the copied string
  */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = src[i];
	return (dest);
}
