#include "main.h"

/**
 * _strlen_recursion - lenght of a string
 * @s: pointer block of memory to fill
 * Return: strlen_recursion
 */

int _strlen_recursion(char *s)
{

	/* Base case */
	if (*s == '\0')
		return (0);

	else
		return (1 + _strlen_recursion(s + 1)); /*sum 1*/}

