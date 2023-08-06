#include "main.h"

/**
  *_memset- function to fill a block of memory with set value
  *@d: character with the accepted values
  *@s: The character that holds the addres of memory
  *@n: character that holds the number of bytes to be changed
  *Return: the number of bytes for the changed array
  */

char *_memset(char *s, char d, unsigned int n)
{
	int i = 0;


	for (; n > 0; i++)
	{
		s[i] = d;
		n--;
	}
	return (s);
}
