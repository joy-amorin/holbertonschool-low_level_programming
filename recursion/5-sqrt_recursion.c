#include "main.h"
/**
* _sqrt - calculate the square root of a number
*
* @x: value to calculate the square root
* @y: square root
*
* Return: y if square root is natural, -1 if square root is not natural
*/
int _sqrt(int x, int y)
{
	if (x == y * y)
		return (y);
	else if (x < y * y)
		return (-1);
	else
		return (_sqrt(x, y + 1));
}

/**
  * _sqrt_recursion - calculates the square root of n.
  * @n: Number to calculate its square root.
  *
  * Return: square root result
  */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 0));
}
