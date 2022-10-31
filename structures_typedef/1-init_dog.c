#include "dog.h"
#include <ctype.h>
#include <stdlib.h>
/**
 * init_dog - a function that initialize a variable of type struct dog
 * @d: First member
 * @name: Second member
 * @age: Third member
 * @owner: the last member
 * Description: Longer description
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL || name != NULL || age != 0 || owner != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
