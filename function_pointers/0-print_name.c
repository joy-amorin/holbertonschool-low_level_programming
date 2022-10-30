#include "function_pointers.h"
#include <stddef.h>
#include <stdio.h>
/**
 * print_name - fuction that print a name
 * @f: pointer to fuction
 * @name: argument
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (f)
		f(name);
}
