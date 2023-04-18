#include "dog.h"
#include <stdlib.h>

/**
 * *new_dog - function that creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: the owner of the dog
 * Return: Return NULL if the function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int a, len1, len2;

	struct dog *nw_dog = NULL;

	len1 = 0;
	while (name[len1] != '\0')
		len1++;
	len2 = 0;
	while (owner[len2] != '\0')
		len2++;

	nw_dog = malloc(sizeof(struct dog));
	if (nw_dog == NULL)
	{
		free(nw_dog);
		return (NULL);
	}
	nw_dog->name = malloc(len1 + 1);
	if (nw_dog->name == NULL)
	{
		free(nw_dog->name);
		free(nw_dog);
		return (NULL);
	}
	nw_dog->owner = malloc(len2 + 1);
	if (nw_dog->owner == NULL)
	{
		free(nw_dog->name);
		free(nw_dog->owner);
		free(nw_dog);
		return (NULL);
	}
	for (a = 0; a <= len1; a++)
		nw_dog->name[a] = name[a];
	for (a = 0; a <= len2; a++)
		nw_dog->owner[a] = owner[a];
	nw_dog->age = age;
	return (nw_dog);
}
