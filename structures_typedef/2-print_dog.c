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
	if (d->name ==  NULL)
		printf("Name: (nil)\n");
	else if (d->age == 0)
		printf("Age: nil\n");
	else if (d->owner == NULL)
		printf("(Owner: (nil)\n");
	else
	{
		printf("Nane: %s\n", d->name);
		printf("Age: %.6f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
	if (d == NULL)
		return;
}
