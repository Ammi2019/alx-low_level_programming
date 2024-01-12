#include "main.h"
                    	
/**
  * _isalpha - c function  that checks for alphabetic character
  * @c: the in put variable
  * Return: 1 if c is a letter, 0 otherwise
  */
int _isalpha(int c)
{
       	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

