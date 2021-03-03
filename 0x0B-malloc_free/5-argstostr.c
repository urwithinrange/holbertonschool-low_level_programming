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
  *_strcat - concats 2 strings
  *@dest: the finalt product
  *@src: the string to be added
  *Return: pointer to final string
  */
char *_strcat(char *dest, char *src)
{
	int i, dlen;

	dlen = _strlen(dest);
	for (i = 0; src[i] != '\0'; dlen++, i++)
		dest[dlen] = src[i];
	dest[dlen] = '\0';
	return (dest);
}
/**
  *argstostr - concatenates all the arguments of your program
  *@ac: the number of args
  *@av: the value of args
  *Return: concat string or NULL for fail
  */
char *argstostr(int ac, char **av)
{
	int i, len = 0;
	char *cat;

	if (ac == 0)
		return (NULL);
	for (i = 0; i < ac; i++)
		len += _strlen(av[i]) + 1;
	cat = malloc(sizeof(char) * len);
	if (cat == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
			return (NULL);
		_strcat(cat, av[i]);
		_strcat(cat, "\n");
	}
	return (cat);
}
