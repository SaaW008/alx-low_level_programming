#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - ...
 * @argc: ...
 * @argv: ...
 * Return: ...
 */

int main(int argc, char *argv[])
{
	int (*opt)(int, int);
	int result;

	if (argc != 4)
	{
		printf("Error1\n");
		return (1);
	}
	opt = get_op_func(argv[2]);
	if (opt == NULL)
	{
		printf("Error2\n");
		return (1);
	}
	result = opt(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", result);
	return (0);
}
