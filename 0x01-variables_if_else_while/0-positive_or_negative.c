#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
int main(void)
{
	int n;
	n=0;
	if ((n<0),(n>0))
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	{
		printf("var is negative:%d\n and var is positive %d\n",--n,n++);
	}
	return (0);
}
