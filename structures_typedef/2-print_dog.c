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
	if (d != NULL)

	{
		printf("Name: %s\n", (d->name) ? d->name : "(nil)");
		printf("Age: %f\n", (d->age) ? d->age : 0);
		printf("Owner %s\n", (d->owner) ? d->owner : "(nil)");
	}
/**
 * conditional operator '?:'
 * If the condition ( Expression1 ) is True, then Expression2 will be
 * executed and the result will be returned. Otherwise,
 * if the condition ( Expression1 ) is false,
 * then Expression3 will be executed and the
 * result will be returned.
 */
}
