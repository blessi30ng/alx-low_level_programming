#include "dog.h"

/**
 * init_dog - initializes dog
 * @d: pointer to dog
 * @age: age of the dog
 * @owner: name of owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
