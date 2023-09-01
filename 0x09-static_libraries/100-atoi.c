#include "main.h"

/**
  * _atoi - function toconvert a string into an integer.
  * @s: the string to use.
  * Return: integer.
  */

int _atoi(char *s)
{
	int sgn = 1, a = 0;
	unsigned int rs = 0;
	while (!(s[a] <= '9' && s[a] >= '0') && s[a] != '\0')
	{
	if (s[a] == '-')
	sgn *= -1;
	a++;
	}
	while (s[a] <= '9' && (s[a] >= '0' && s[a] != '\0'))
	{
	rs = (rs * 10) + (s[a] - '0');
	a++;
	}
	rs *= sgn;
return (rs);
}
