#include "3-calc.h"
#include <stdlib.h>
/**
 * get_op_func - function that selects the correct function to perform
 * @s: The operator passed as argument.
 * Return: A pointer to the function corresponding
 *         to the operator given as a parameter.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t op[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};

	int a = 0;

	while (op[a].p != NULL && *(op[a].p) != *s)
		a++;

	return (op[a].f);
}
