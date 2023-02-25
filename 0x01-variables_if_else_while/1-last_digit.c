#include <stdlib.h>
#include <time.h>

/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
* main -Assign a random number
* Return: 0 (success)
*/
int main(void)
{
	int n, lstd;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (lstd > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lstd);
	}
	else if (lstd < 6 && lstd != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lstd);	
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n", n, lstd);
	}	
	return (0);
}
