#ifndef DOG_H
#define DOG_H
#include <stddef.h>

/**
 * struct dog - dog structure
 * @name: name of dog
 * @age: age of the dog
 * @owner: name of owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
