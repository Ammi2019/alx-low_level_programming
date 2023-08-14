#ifndef DOG_H
#define DOG_H

/**
  * @name: string to return the name
  * @age: value to be printed in float type
  * @owner: String to print owner
  * Return: The Strings
  */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
  *dog_t - definition of type for dog
  */

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
