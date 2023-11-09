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

	if (argc != 4)
	{
		printf("Error\n");
		return (1);
	}
	opt = get_op_func(argv[2]);
	if (opt == NULL)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", opt(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
