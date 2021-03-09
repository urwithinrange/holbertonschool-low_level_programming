#include "dog.h"
/**
  *free_dog - frees the memory with dog_t
  *@d: the memory to be freed
  *Return: void
  */
void free_dog(dog_t *d)
{
	free(d);
}
