#include "main.h"
/**
 *  _islower - cheks for lowercase characters
 * Return: 1 if c is lowercase, 0 otherwise
 * @c: received characters
 */
int _islower(int c);
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
