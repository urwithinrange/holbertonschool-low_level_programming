#include "dog.h"
/**
  * init_dog - initialize a variable of type struct dog
  * @d: location of stored information
  * @name: the name given for dog
  * @age: the age of dog
  * @owner: the owner of dog
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->owner = owner;
		d->age = age;
	}
}
