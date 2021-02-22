#include "holberton.h"
/**
  **_strstr - function that locates the first occurance of a sub string
  *@haystack: the string being searched
  *@needle: the string to be compared
  *Return: pointer to the begining of the substring or NULL if not found
  */
char *_strstr(char *haystack, char *needle)
{
	int i;

	for (; *haystack != '\0'; haystack++)
	{
		if (*haystack == *needle)
		{
			for (i = 0; needle[i] != '\0'; i++)
				if (haystack[i] != needle[i])
					break;
			if (needle[i] == '\0')
				return (haystack);
		}
	}
	return (NULL);
}
