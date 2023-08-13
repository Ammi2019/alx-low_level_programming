#include "main.h"

/**
  * is_prime_number - a function to validate a prime number
  * @n: the prime number to be validated
  * return: 1 if prime number; else return 0
  */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return(_is_actual_prime(n, n - 1));
}
/**
  * _is_actual_prime - recursively calculates if a number is prime
  * @n: number to validate as prime
  * @a: the iterator
  */


int _is_actual_prime(int n, int a)
{
	if ((n / a == n && n / a == n) || a == 1)
	{
		return (1);
	}
		if (n % a == 0 && a > 0)
		return (0);
	return (_is_actual_prime(n, a - 1));
}
