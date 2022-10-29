#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
#include <string.h>
/**
 * new_dog - creates a struc new dog
 * @age: age of a dog
 * @name: name of a dog
 * @owner: owner of a dog
 * Return: Null if functions fail, pointer a new struct dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (dog)
	{
		if (dog->name != NULL)
		{
			dog->name = strdup(name);
		return (NULL);
		free(dog);
		}

		if (dog->owner != NULL)
		{
			dog->owner = strdup(owner);
		return (NULL);
		free(dog);
		}
		dog->age = age;
	}
	return (NULL);
	free(dog);
}
