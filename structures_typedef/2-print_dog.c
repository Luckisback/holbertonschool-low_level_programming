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
	if (d == NULL)
		return;
	if (d->name ==  NULL)
		printf("Name: (nil)\n");
	else
		printf("Nane: %s\n", d->name);
	printf("Age: %f\n", d->age);
	if (d->owner == NULL)
		printf("(Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
