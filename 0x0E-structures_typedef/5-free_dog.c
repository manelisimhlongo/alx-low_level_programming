#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * free_dog - function that frees dogs
 * @d: structure to free
 * Return: nothing
 */
void free_dog(dog_t *d)
{

	if (d == NULL)
		return;
	if (d->name != NULL)
		free(d->name);
	if (d->owner != NULL)
		free(d->owner);
	free(d);
}
