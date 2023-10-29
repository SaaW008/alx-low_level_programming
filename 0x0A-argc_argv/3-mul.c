#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints its name, followed by a new line.
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: exit success
 */

int main(int argc, char *argv[])
{
	int mul;

	if (argc == 3)
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
			return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
