#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - function that free memories allocated
 * @d: argument
 */

void free_dog(dog_t *d)
{
	if (d->owner != NULL)
	{
		free(d->owner);
		free(d->name);
	}
	free(d);
}
