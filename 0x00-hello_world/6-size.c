#include <stdio.h>

/**
 * main- function that prints sizeof data types.
 * returns: void
 */

int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;
	{
	printf("size of a char: %ld byte(s)\n", (unsigned long)sizeof(a));
	printf("size of an int: %d byte(s)\n", (unsigned long)sizeof(b));
	printf("size of a long int: %d byte(s)\n", (unsigned long)sizeof(c));
	printf("size of a long long int: %d byte(s)\n", (unsigned long)sizeof(d));
	printf("size of a float: %lu byte(s)\n", (unsigned long)sizeof(e));
	return (0);
	}
}
