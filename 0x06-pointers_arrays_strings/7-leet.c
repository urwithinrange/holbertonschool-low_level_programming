#include "holberton.h"
/**
  **leet - encodes a string
  *@str: the string to be modded
  *Return: the mod string
  */
char *leet(char *str)
{
	int i, j;
	char *lc = "aeotl";
	char *UC = "AEOTL";
	char *elite = "43071";

	for (i = 0; str[i] != '\0'; i++)
		for (j = 0; j <= 5; j++)
			if (str[i] == uc[j] || str[i] == UC[j])
				str[i] = elite[j];
	return (str);
}
