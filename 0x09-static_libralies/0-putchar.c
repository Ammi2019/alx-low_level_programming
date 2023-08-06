#include <unistd.h>

/**
  *_putchar-The function that writes
  *the character of c to standard output
  *@c: The character being printed
  *Return: 1 is success and -1 is erroe
  */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
