#include "main.h"

/**
*binary_to_uint - converts a binary number to unsigned int
* @b: pointing to a string of 0 and 1 chars
* Return: the converter number or 0
*
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int r = 0;
	unsigned int i = 0;
	unsigned int b2 = 1;

	if (b == NULL)
	{
		return (0);
	}
	if ((b[i] != '0') && (b[i] != '1'))
	{
		return (0);
	}
	while (b[i] != '\0')
	{
		if (b[i] == '1')
		{
			r = r + b2;
		}
	}
	b2 = b2 * 2;
	i--;

	return (r);
}
