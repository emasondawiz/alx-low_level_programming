#ifndef EMASON
#define EMASON

#include <stdio.h>

/**
 * struct dog - Struct Dog
 * @name: Input value
 * @age: Input value
 * @owner: Input value
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);


#endif
