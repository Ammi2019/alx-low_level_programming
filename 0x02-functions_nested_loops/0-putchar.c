#include "main.h"
/**
*programmer header file
*
*Return: Always 0 (indeed)
*/
int main(void)
{
	char *sh = "main";

	while (*sh)
	{
		_putchar(*sh);
		sh++;
	}
	_putchar('\n');

	return (0);
}
