#include "holberton.h"
/**
  **rot13 - function that encodes a string using rot13
  *@str: the string being passed
  *Return: the modded string
  */
char *rot13(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (; (str[i] >= 97 && str[i] <= 122) ||
				(str[i] >= 65 && str[i] <= 90); i++)
		{
			if ((str[i] >= 78 && str[i] <= 90) ||
			    (str[i] >= 110 && str[i] <= 122))
				str[i] -= 13;
			else
				str[i] += 13;
		}
	}
	return (str);
}
