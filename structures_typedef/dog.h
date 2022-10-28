#ifndef DOG_H
#define DOG_H

/**
  * struct dog -description of a dog.
  * @name: name of a dog.
  * @owner: owner of a dog.
  * @age: age of a dog.
  *
  * Description: name, owner and age of a dog.
  */
typedef struct dog
{
	char *name, *owner;
	float age;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
char *_strdup(char *str);
void free_dog(dog_t *d);
#endif

