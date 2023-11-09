#include "3-calc.h"
#include <stdio.h>
#include <string.h>

/**
 * get_op_func - get op func
 * @s: char op
 * return: pointer to op func
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	if (*s != '+' || *s != '-' || *s != '*' || *s != '/' || *s != '%')
		return NULL;
	while ( i < 5)
	{
		if (strcmp(s,ops[i].op) == 0)
			return (ops[i].f());
		i++;
	}
	return (0);
}
