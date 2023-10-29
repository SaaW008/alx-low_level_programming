#include "main.h"
#include <stdio.h>

/**
 * main - a program that prints its name, followed by a new line.
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: exit success
 */

int main(int argc, char *argv[])
{
	(void)argv[argc];
	printf("%d\n", argc);
	return (0);
}
