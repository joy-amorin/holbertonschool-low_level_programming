#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 *print_numbers - function that print number
 *@separator: string to be printed between numbers
 *@n: numbers of integers passed to th function
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list count;

	if (separator == NULL)
	{
		separator = "";
	}
	va_start(count, n);

	for(i = 0; i < n; i++)
		if (i != 0)
		{
			printf("%d", va_arg(count, int));
			printf("%s", separator);
		}
	
	printf("\n");
	va_end(count);
}
