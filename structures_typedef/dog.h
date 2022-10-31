#ifndef __DOG__
#define __DOG__
#include <stdio.h>
/**
 * struct dog - A structure
 * @name: First member
 * @age: Second member
 * @owner: Third member
 * Description: Structure Dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
