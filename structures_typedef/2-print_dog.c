#include "dog.h"
#include <stdlib.h>
#include <ctype.h>
/**
 * print_dog - Short description
 * @d: First member
 * Description: Longer description
 */
void print_dog(struct dog *d)
{
	if (d->name ==  NULL || d->age == 0 || d->owner == NULL)
	{
		if (d->name ==  NULL)
			printf("(nil)");
		if (d->age == 0)
			printf("nil");
		if (d->owner == NULL)
			printf("(nil)");
	}
	else
	{
		printf("Nane: %s\n", d->name);
		printf("Age: %.6f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
	if (d == NULL)
			printf(" ");
}
