#include "dog.h"
#include <stdio.h>
/**
 * init_dog - check the code
 * @d: - to check
 * @name: - to check
 * @age: to check
 * @owner: to check
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
