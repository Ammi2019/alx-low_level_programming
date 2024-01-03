#include "main.h"
/**
  * _strlen - a function that returns the length of a string
  * @s: string
  * Return: string length
  */
int _strlen(char *s)
{
		int lng = 0;

		while (*s != '\0')
		{
		lng++;
		s++;
		}
		return (lng);
}
