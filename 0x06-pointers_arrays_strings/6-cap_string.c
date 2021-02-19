#include "holberton.h"
/**
  *cap_string - capitalizes all words of a string
  *@str: the string passed
  *Return: mod string
  */
char *cap_string(char *str)
{
	int i, j;
	char temp = '\0';
	char sep[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125, 0};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 14; j++)
		{
			if (str[i] >= 97 && str[i] <= 122 && temp == sep[j])
				str[i] = str[i] - 32;
		}
		temp = str[i];
	}
	return (str);
}
