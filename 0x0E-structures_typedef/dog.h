#ifndef STRDOG_H
#define STRDOG_H

/**
 * struct dog - structure of items about a dog
 * @name: items 1
 * @age: items 2
 * @owner: items 3
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef is a new name for the type struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
