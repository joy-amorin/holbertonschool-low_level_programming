#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
* print_dog - prints a struct dog
*
* @d: pointer of struct dog
*/

void print_dog(struct dog *d)
{
	if (d->name != NULL)
	{
		printf("Name: %s\n", d->name);
	}
		printf("Name: (nil)\n");

	if (d->age != 0)
	{
		printf("Age: %.1f\n", d->age);
	}

	if (d->owner != NULL)
	{
		printf("Owner: %s\n", d->owner);
	}
}
