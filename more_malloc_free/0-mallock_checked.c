#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - alocates memory
 *
 * Return: 98 if malloc fails, pointer if not fails
 */
void *malloc_checked(unsigned int b);
{
	void *ptr
		ptr = malloc(b):
			if (!ptr)
			return (98);
	return (ptr);
}
