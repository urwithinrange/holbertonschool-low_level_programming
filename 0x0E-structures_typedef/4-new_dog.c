#include "dog.h"
/**
  *_strdup - returns a pointer to a newly allocated space in memory,
  *which contains a copy of the string given as a parameter
  *@str: the string being duplicated
  *
  *Return: the copied array
  */
char *_strdup(char *str)
{
	int len, i;
	char *dup;

	if (str == NULL)
		return (NULL);
	for (len = 0; str[len] != '\0'; len++)
		continue;
	dup = malloc(sizeof(char) * len + 1);
	if (dup == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		dup[i] = str[i];
	}
	dup[i] = '\0';
	return (dup);
}

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

	d = malloc(sizeof(dog_t));
	if (d == NULL)
	{
		free(d);
		return (NULL);
	}
	d->name = _strdup(name);
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	d->age = age;
	d->owner = _strdup(owner);
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	return (d);
}
