#include "main.h"

/**
  * _strchr -function  Entry point
  * @s: input variablee
  * @c: input variable
  * Return: Always 0 (Success)
  */

char *_strchr(char *s, char c)
{
       	int a = 0;

       	for (; s[a] >= '\0'; a++)
       	{
      	if (s[a] == c)
              	return (&s[a]);
       	}
        	return (0);
}
