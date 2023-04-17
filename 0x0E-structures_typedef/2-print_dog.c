#include "dog.h"

/**
 * print_dog - Initialise the dog struct
 * @d: Input
 */

void print_dog(struct dog *d)
{
	d = malloc(sizeof(struct dog));
	if (d == NULL)
	{
		return;
	}

	if (d->name == NULL)
	{
		d->name = "(nil)";
	}

	if (d->owner == NULL)
	{
		d->owner = "(nil)";
	}

	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
