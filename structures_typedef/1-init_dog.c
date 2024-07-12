#include <stddef.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - function
 *
 * @d: 1st pointer
 * @name: 2nd pointer
 * @age: var
 * @owner: 3rd pointer
 *
 * Return: Always 0
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
