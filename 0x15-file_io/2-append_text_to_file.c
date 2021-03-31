#include "holberton.h"
/**
  *append_text_to_file - appends text at the end of a file
  *@filename: the name of the file
  *@text_content: ios the string  to add at the end of the file
  *
  *Return: 1 on success and -1 on failure
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int len, file_des;

	if (filename == NULL)
		return (-1);
	file_des = open(filename, O_RDWR | O_APPEND);
	if (file_des == -1)
		return (-1);
	if (text_content == NULL)
		return (-1);
	for (len = 0; text_content[len] != 00; len++)
		continue;
	write(file_des, text_content, len);
	return (1);
}
