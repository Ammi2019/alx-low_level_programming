#include "main.h"
/**
  *_memcpy - function that copies memory area
  *@dest: the memory where is stored
  *@src: the memory where is copied
  *@n: the number of bytes
  *Return: copied memory with n byted changed
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int p = 0;
	int d = n;

	for (; p < d; p++)
	{
	dest[p] = src[p];
	n--;
	}
	return (dest);
}
