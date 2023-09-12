#ifndef DOG_H
#define DOG_H

/**
 * struct dog - function that prints a dog's basic info
 * @name: First member
 * @age: Second member
 * @owner: Third member
 * Description: Longer description
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * his_dog- typedef for struct dog
 */
typedef struct dog his_dog;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
his_dog *new_dog(char *name, float age, char *owner);
void free_dog(his_dog *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
