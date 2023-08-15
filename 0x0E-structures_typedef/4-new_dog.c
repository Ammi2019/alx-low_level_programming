#include <stdlib.h>
#include "dog.h"

/**
 * _strlen -Function that  returns the length of a string
 * @s: The string to evaluate
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
	int i;
	i = 0;

	while (s[i] != '\0')
	{
	i++;
	}
	return (i);
}

/**
  * *_strcpy - It copies the string pointed to
  * including the terminating null byte (\0)
  * to the buffer pointed to by dest
  * @dest: The pointer to the buffer in which we copy the string
  * @src: The string to be copied
  *
  * Return: pointer to dest
  */
char *_strcpy(char *dest, char *src)
{
	int ln, a;
	ln = 0;

	while (src[ln] != '\0')
	{
		ln++;
	}

	for (a = 0; a < ln; a++)
	{
	dest[a] = src[a];
	}
	dest[a] = '\0';

	return (dest);
}

/**
   * new_dog - creates a new dog
   * @name: the dog nmae
   * @age: the dog age
   * @owner: the dog owner
   *
   * Return: pointer to the new dog (Success), NULL otherwise
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
