#include "main.h"
/**
 * factorial - returns a factorial of a number
 * @n: number
 *
 * Return: -1 or n factorial
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));
}
