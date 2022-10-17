#include "main.h"
/**
 * _pow_recursion - return te value of x raised to the power of y
 * @x: base
 * @y: power
 *
 * Return: -1 if is y lower than 0, value of x raised to the power of y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
	else
		return (1);
	}

		return (x * _pow_recursion(x, y - 1));
}
