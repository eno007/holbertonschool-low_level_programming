#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * new_dog - check the code
 * @name: - to check
 * @age: - to check
 * @owner: - to check
 * Return: new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int len_new, len_old, i;
	dog_t *doggy;

	len_new = len_old = 0;

	while (name[len_new++])
		;
	while (owner[len_old++])
		;
	doggy = malloc(sizeof(dog_t));
	if (doggy == NULL)
		return (NULL);
	doggy->name = malloc(len_new * sizeof(doggy->name));
	if (doggy == NULL)
	{
		free(doggy);
		return (NULL);
	}
	for (i = 0; i < len_new; i++)
		doggy->name[i] = name[i];
	doggy->age = age;
	doggy->owner = malloc(len_old * sizeof(doggy->owner));
	if (doggy == NULL)
	{
		free(name);
		free(doggy);
		return (NULL);
	}
	for (i = 0; i < len_old; i++)
		doggy->owner[i] = owner[i];
	return (doggy);
}
