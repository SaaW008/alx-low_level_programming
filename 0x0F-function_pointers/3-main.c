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
		printf("Error\n");
		exit (99);
	}
	opt = get_op_func(argv[2]);
	if (opt == NULL)
	{
		printf("Error\n");
		exit (100);
	}
	result = opt(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", result);
	return (0);
}
