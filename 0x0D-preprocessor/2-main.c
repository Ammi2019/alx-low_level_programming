#include <stdio.h>
/**
  * printf - function that writes the name of the file it was compiled from
  * Return: me of the file compiled from
  */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
