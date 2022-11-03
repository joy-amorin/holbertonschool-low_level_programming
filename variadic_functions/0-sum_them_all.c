#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - sum of all its parameters
 *
 * @n: int parameters
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list add;	/*Declaring arguments list*/
	unsigned int i;
	int sum = 0;

	va_start(add, n);	/*Initializing arguments list*/
	if (n == 0)
	{
		return (0);
	}
	for (i = 0; i < n; i++)
	{
		sum += va_arg(add, int);	/*Accesing to next argument and sum*/
		va_end(add);	/*Ending arguments list*/

	}
	return (sum);
}
