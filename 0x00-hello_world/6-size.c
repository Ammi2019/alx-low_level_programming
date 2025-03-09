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
	printf("size of a char: %ldbyte(s)\n", (unsigned long)sizeof(a));
	printf("size of an int: %dbyte(s)\n", (unsigned long)sizeof(b));
	printf("size of a long int: %dbyte(s)\n", (unsigned long)sizeof(c));
	printf("size of long long int: %dbyte(s)\n", (unsigned long)sizeof(d));
	printf("size of float: %lubyte(s)\n", (unsigned long)sizeof(e));
	return (0);
	}
}
