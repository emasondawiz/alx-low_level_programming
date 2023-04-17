#ifndef EMASON
#define EMASON
#include <stdlib.h>
#include <stdio.h>
/**
 * struct dog - Dog struct
 * @name: Input value
 * @age: Input value
 * @owner: Input
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
