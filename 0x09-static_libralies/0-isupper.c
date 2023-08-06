#include "main.h"

/**
  *_isupper - a function to print upper case letters
  *@c: The character checked
  *
  *Return: Always 0 and or and /or 1
  */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
