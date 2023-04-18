#ifndef EMASON
#define EMASON
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
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
/**
 * dog_t - dog struct typedef
 */
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
