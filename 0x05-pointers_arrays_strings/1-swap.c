#include "main.h"
/**
 * Main – entry point
 * Description: pointer and arrays
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
