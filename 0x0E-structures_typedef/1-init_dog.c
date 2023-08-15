#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - function that initialize a variable of type struct dog
 * @name: sting to input
 * @age: string to input
 * @owner: string to input
 * @d: pointer
 * struct dog: type def
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if(d == NULL)
	d = malloc(sizeof(struct dog));

	d->name = name;
	d->age = age;
	d->owner = owner;
}
