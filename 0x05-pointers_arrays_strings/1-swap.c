#include "main.h"

/**
 * swap_int - function to swip the values of two ints
 * @a: fist int
 * @b: second int
 * Return: void.
 */

void swap_int(int *a, int *b)
{
	int *p;

	p = &a;
	a = &b;
	b = &p;

}
