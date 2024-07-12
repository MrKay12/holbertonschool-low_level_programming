#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - function
 *
 *@name: 1st pointer
 *@age: var
 *@owner: 2nd pointer
 *
 *Return: Always 0
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ndog;
	int i, cpnm = 0, cpown = 0;

	ndog = (dog_t *)malloc(sizeof(dog_t));
	if (ndog == NULL)
		return (NULL);
	if (name != NULL)
	{
		while (name[cpnm] != '\0')
			cpnm++;
		ndog->name = (char *)malloc((cpnm + 1) * sizeof(char));
		if (ndog->name == NULL)
		{
			free(ndog);
			return (NULL);
		}
		for (i = 0; i <= cpnm; i++)
			ndog->name[i] = name[i];
	}
	else
		ndog->name = NULL;
	if (owner != NULL)
	{
		while (owner[cpown] != '\0')
			cpown++;
		ndog->owner = malloc((cpown + 1) * sizeof(int));
		if (ndog->owner == NULL)
		{
			free(ndog->name);
			free(ndog);
			return (NULL);
		}
		for (i = 0 ; i <= cpown; i++)
			ndog->owner[i] = owner[i];
	}
	else
		ndog->owner = NULL;
	ndog->age = age;
	return (ndog);
}
