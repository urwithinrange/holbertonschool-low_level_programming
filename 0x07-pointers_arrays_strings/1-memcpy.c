#include "holberton.h"
/**
  **_memcpy - copies memory area
  *@dest: the memory to copy to
  *@src:the source to copy from
  *@n: number of bytes from src to dest
  *Return: mod dest
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*dest = src[i];
		dest++;
	}
	return (dest);
}
