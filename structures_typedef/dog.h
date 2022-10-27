#ifndef DOG_H
#define DOG_H

/**
  * struct dog -dDescription of a dog.
  * @name: name of a dog.
  * @owner: owner of a dog.
  * @age: age of a dog.
  *
  * Description: name, owner and age of a dog.
  */

struct dog
{
	char *name, *owner;
	float age;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
char *_strdup(char *str);
void free_dog(dog_t *d);
#endif
i
