#include "dog.h"
/**
  *print_dog - prints struct dog
  *@d: the container with required information
  *Return: 0 on success.
  */
void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name == NULL)
			d->name = "(nil)";
		if (d->owner == NULL)
			d->owner = "(nil)";
		printf("Name: %s\n", d->name);
		if (d->age == (00 || '\0'))
			printf("Age: (nil)\n");
		else
			printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
