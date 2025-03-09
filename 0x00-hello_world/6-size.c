#include <stdio.h>

/**/

int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("size of a char: %c\n",(unsigned long)sizeof(a));
	printf("size of an int: %d\n",(unsigned long)sizeof(b));
	printf("size of a long int: %d\n",(unsigned long)sizeof(c));
	printf("size of long long int: %d\n",(unsigned long)sizeof(d));
	printf("size of float: %lu\n",(unsigned long)sizeof(e));
	return(0);
	
}
