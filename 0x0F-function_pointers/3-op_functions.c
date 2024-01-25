#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
* op_add - a function to return the sum of two numbers.
* @a: var 1
* @b: var 2.
* Return: sum of two vars.
*/

int op_add(int a, int b)
{
	return (a + b);
}
/**
* op_sub - a son that returns the difference of two numbers.
* @a:var 1,
* @b: var 2,
* Return: Diference of two vars.
*/

int op_sub(int a, int b)
{
	return (a - b);
}
/**
* op_mul - a function that returns the product of two numbers.
* @a: var 1,
* @b: var 2,
* Return: Multiplication of two vars,
*/

int op_mul(int a, int b)
{
	return (a * b);
}

/**
* op_div - a function that returns the division of two numbers.
* @a: var 1.
* @b: var 2.
* Return: quotient of two vars.
*/
int op_div(int a, int b)
{
	return (a / b);
}
/**
* op_mod - a function that returns a remainder after
* the division of two numbers.
* @a: var 1,
* @b: var 2,
* Return: remainder after the division Var 2 into var 1.
*/

int op_mod(int a, int b)
{
	return (a % b);
}
