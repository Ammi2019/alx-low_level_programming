#include <stdio.h>

/** 
  * print_name -  function that prints a name
  * @name: The string to be printed
  * @*f: Function pointer
  * @*: pointer
  * Return: The String and or Void
  */

void print_name(char *name, void (*f)(char *))
{
	if(name == NULL || f == NULL)
		return;
	f(name);
}
