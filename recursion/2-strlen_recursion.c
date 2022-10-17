#include "main.h"
/**
 * _strlen_recursion - returns the length of a string
 * @s: ponter to the string
 *
 * Return: 0
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		_strlen_recursion(s + 1);
		_putchar(*s);
	}
	return (0);
}
