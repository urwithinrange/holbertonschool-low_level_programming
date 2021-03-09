#include "dog.h"
/**
  *new_dog - creating a new dog
  *@name: dog name
  *@age: dog age
  *@owner: dog owner
  *Return: the updated name for dog or NULL if func fails
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	if (name == NULL || owner == NULL)
		return (NULL);
	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	d->name = name;
	d->age = age;
	d->owner = owner;
	return (d);
}
