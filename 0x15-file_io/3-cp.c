#include "holberton.h"
/**
  *main - the function to copy file
  *@argc: the number of arguments
  *@argv: the file names to be used
  *Return: 0 for success or other for failure
  */
int main(int argc, char *argv[])
{
	int  inputFd, outFd;
	ssize_t numRead;
	char buf[BUF_SIZE];

	if (argc != 3)
	{dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97); }
	inputFd = open(argv[1], O_RDONLY);
	if (inputFd == -1)
	{dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98); }
	outFd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (outFd == -1)
	{dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99); }
	while ((numRead = read(inputFd, buf, BUF_SIZE)) > 0)
	{
		if  (write(outFd, buf, numRead) != numRead)
		{dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99); }
	}
	if (numRead == -1)
	{dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98); }
	if (close(inputFd) == -1)
	{dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", argv[1]);
		exit(100); }
	if (close(outFd) == -1)
	{dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", argv[2]);
		exit(100); }
	return (0);
}
