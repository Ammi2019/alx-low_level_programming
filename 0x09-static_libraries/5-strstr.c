#include "main.h"
/**
  * _strstr - n function try point
  * @haystack: input
  * @needle: input
  * Return: Always 0 (Success)
  */
char *_strstr(char *haystack, char *needle)
{
      	for (; *haystack != '\0'; haystack++)
      	{
       	char *a = haystack;
       	char *p = needle;

	while (*a == *p && *p != '\0')
	{
		a++;
		p++;
	}
	if (*p == '\0')
	       	return (haystack);
	}
	return (0);
}
