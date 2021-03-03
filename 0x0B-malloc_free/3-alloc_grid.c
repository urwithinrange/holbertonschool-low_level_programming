#include "holberton.h"
/**
  ***alloc_grid - creates a 2 dimensional array
  *@width: first passed int
  *@height: second passed int
  *Return: NULL on fail and the allocated space on success
  */
int **alloc_grid(int width, int height)
{
	int **buffer, *ptr, i, j, size;

	if (width <= 0 || height <= 0)
		return (NULL);
	size = (sizeof(int *) * height) + (sizeof(int) * height * width);
	buffer = (int **)malloc(size);
	if (buffer == NULL)
		return (NULL);
	/* points to the first element of a 2D array*/
	ptr = (int *)(buffer + height);
	/*loop to point height pointer to appropriate location in 2D array*/
	for (i = 0; i < height; i++)
		buffer[i] = (ptr + width * i);
	/*loop sets buffer to 0*/
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			buffer[i][j] = 0;
	return (buffer);
}
