#include "dog.h"
/**
 *_strlen - function that returns the length of a string
 *@s: the string passed
 *Return: 0 on sucess
 */
int _strlen(char *s)
{
	int n;

	if (s == NULL)
		return (0);
	for (n = 0; s[n] != '\0'; n++)
		continue;
	return (n);
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
	int nlen, olen, i;
	dog_t *d;

	if (name == NULL || owner == NULL)
		return (NULL);
	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	nlen = _strlen(name);
	olen = _strlen(owner);
	d->name = malloc(nlen * sizeof(char));
	if (d->name == NULL)
		return (NULL);
	d->owner = malloc(olen * sizeof(char));
	if (d->owner == NULL)
		return (NULL);
	for (i = 0; i < nlen; i++)
		d->name[i] = name[i];
	d->age = age;
	for (i = 0; i < olen; i++)
		d->owner[i] = owner[i];
	return (d);
}
