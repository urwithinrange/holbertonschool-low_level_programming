#include "holberton.h"
/**
  **_strstr - function that locates the first occurance of a sub string
  *@haystack: the string being searched
  *@needle: the string to be compared
  *Return: pointer to the begining of the substring or NULL if not found
  */
char *_strstr(char *haystack, char *needle)
{
	int i, j;
	char *p1 = haystack;
	char *p2 = needle;

	for (; p1 != '\0'; p1++)
		for (i = 0, j = 0; p1[i] == p2[j] ||
			p2[j] == '\0'; i++, j++)
		if (p2[j] == '\0')
			return (p1);
return (NULL);
}
