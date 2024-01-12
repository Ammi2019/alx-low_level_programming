#include "main.h"

/**
  * char *_strcpy - a function that  copies the string pointed to by src
  * @dest: copy to
  * @src: copy from
  * Return: string value
  */

char *_strcpy(char *dest, char *src)
{
	int a = 0;
       	int j = 0;

	while (*(src + a) != '\0')
	{
		a++;
       	}
       	for ( ; j < a ; j++)
       	{
       	dest[j] = src[j];
       	}
    	dest[a] = '\0';
       	return (dest);
}


