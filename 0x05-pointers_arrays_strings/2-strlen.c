#include "main.h"
/**
 * Main – entry point
 * Description: pointer and arrays
 * Return: Always 0
 */
int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}

	return (longi);
}
