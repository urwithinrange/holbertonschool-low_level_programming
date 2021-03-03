#include "holberton.h"
/**
  ***alloc_grid - creates a 2 dimensional array
  *@width: first passed int
  *@height: second passed int
  *Return: NULL on fail and the allocated space on success
  */
int **alloc_grid(int width, int height)
{
	int **buffer, i, j;

	if ((width || height) <= 0)
		return (NULL);
	buffer = malloc(sizeof(int *) * height);
	if (buffer == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		buffer[i] = malloc(width * sizeof(int));
			if (buffer[i] == NULL)
			{
				for (; i > 0; i--)
					free(buffer[i]);
				free(buffer);
				return (NULL);
			}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			buffer[i][j] = 0;
	}
	return (buffer);
}
