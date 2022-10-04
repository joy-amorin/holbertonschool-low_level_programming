#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 * @n: is a integer number resived
 * Return: less than 0 absolute value,greater than or equal to 0 the number
 */
int _abs(int n)
{
	if (n >= 0)
	{
		n = (n);
		return (n);
	}
	else
		n = (-n);
	return (-n);
}

