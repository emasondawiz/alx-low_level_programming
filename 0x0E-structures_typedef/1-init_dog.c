#include "main.h"

/**
 * init_dog - Initialise the dog struct
 * @d: Input
 * @name: Input
 * @age: Input
 * @owner: Input
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
