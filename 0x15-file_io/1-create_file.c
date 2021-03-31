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
  *create_file - function that creates a file
  *@filename: the name of the file to create
  *@text_content: is a NULL terminated string to write to the file
  *Return: 1 on success and -1 on fail
  */
int create_file(const char *filename, char *text_content)
{
	int len, file_des;

	if (filename == NULL)
		return (-1);
	len = _strlen(text_content);
	file_des = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (file_des == -1)
		return (-1);
	write(file_des, text_content, len);
	close(file_des);
	return (1);
}
