#include "main.h"

int prime_num (int b, int a);

/**
  * is_prime_number - function that returns 1 if the input
  * integer is a prime number, otherwise return 0
  * @n: the number to evaluate
  *
  * Return: 1 if n is a prime number, 0 if not
  */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_num(n, n - 1));
}

/**
  * actual_prime - calculates if a number is prime recursively
  * @b: number to evaluate
  * @a: iterator
  * Return: 1 if n is prime, 0 if not
  */
int prime_num(int b, int a)
{
	if (a == 1)
		return (1);
	if (b % a == 0 && a > 0)
		return (0);
	return (prime_num(b, a - 1));
}

