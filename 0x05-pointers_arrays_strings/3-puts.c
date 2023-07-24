#include "main.h"
/**
 * Main – entry point
 * Description: pointer and arrays
 * Return: Always 0
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}
