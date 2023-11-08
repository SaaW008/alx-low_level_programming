#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints a name as is by function
 * @name: name of the person
 * @f: pointer to finction that print name
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
