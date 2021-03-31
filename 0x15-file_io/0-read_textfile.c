#include "holberton.h"
/**
  *read_textfile - function that reads a text file and prints it to the STDOUT
  *@filename: the file that text is stored
  *@letters: the number of letters to print
  *Return: the number of char printed or 0 for fail
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fsize;
	ssize_t count;
	char *str = malloc(sizeof(char) * letters + 1);

	if (str == NULL || filename == NULL)
		return (0);
	fsize = open(filename, O_RDWR);
	if (fsize == -1)
		return (0);
	count = read(fsize, str, letters);
	if (count == -1)
		return (0);
	str[count] = '\0';
	count =  write(STDOUT_FILENO, str, count);
	if (count == -1)
		return (0);
	close(fsize);
	free(str);
	return (count);
}
