#include "dog.h"
/**
  *free_dog - frees the memory with dog_t
  *@d: the memory to be freed
  *Return: void
  */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
