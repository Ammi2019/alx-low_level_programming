
#include <stdlib.h>
#include "dog.h"
/**
 * _strlen - a function that returns the string length
 * @s: string 
 * Return: string length
 */
int _strlen(char *s)
{
	int len;
	len = 0;
	
	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}

/**
 * *_strcpy - a function that  copies the string pointed to
* @dest: first string
 * @src: string
* Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int len, i;
	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - creates a new dog id
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: pointer
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int ln1, ln2;
	ln1 = _strlen(name);
	ln2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	return (NULL);

	dog->name = malloc(sizeof(char) * (ln1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (ln2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
