#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/**
  *the main function returns void
 */
int main(void)
/*this code prints a postive or negative in*/
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}
	return (0);
}
