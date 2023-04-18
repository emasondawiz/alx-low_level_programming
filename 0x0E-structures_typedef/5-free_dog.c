#include "dog.h"

/**
 * free_dog - Initialise the dog struct
 * @d: Input
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
