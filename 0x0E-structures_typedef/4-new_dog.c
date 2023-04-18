#include "dog.h"

/**
 * new_dog - Initialise the dog struct
 * @name: Input
 * @age: Input
 * @owner: Input
 * Return: Always success
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;
	int namelength, ownerlength;

	namelength = strlen(name);
	ownerlength = strlen(owner);

	newdog = malloc(sizeof(dog_t));

	if (newdog == NULL)
		return (NULL);
	newdog->name = malloc((namelength + 1) * sizeof(char));

	if (newdog->name == NULL)
	{
		free(newdog);
		return (NULL);
	}
	newdog->owner = malloc((ownerlength + 1) * sizeof(char));
	if (newdog->owner == NULL)
	{
		free(newdog);
		free(newdog->name);
		return (NULL);
	}
	newdog->age = age;
	strcpy(newdog->name, name);
	strcpy(newdog->owner, owner);
	return (newdog);
}
