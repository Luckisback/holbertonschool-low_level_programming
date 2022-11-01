#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *_strlen - function that returns the length of a string
 *@s: character
 *Return: always 0
 */
int _strlen(char *s)
{
	int c = 0;

	while (s[c] != '\0')
		c++;
	return (c);
}
/**
 *_strcpy -  copies the string pointed to by src, including the terminating
 *@dest: variable destination
 *@src:variable copy
 *Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		(dest[i]) = (src[i]);
		i++;
	}
	(dest[i]) = '\0';
	return (dest);
}

/**
 * new_dog - function that creates new structure
 * @name: First member
 * @age: Second member
 * @owner: Third member
 * Return: NULL if function fails
 * Description: Longer description
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *n_dog;

	n_dog = malloc(sizeof(dog_t));
	if (n_dog == NULL)
	{
		free(n_dog);
		return (NULL);
	}
		n_dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (n_dog->name == NULL)
{
	free(n_dog->name);
	free(n_dog);
	return (NULL);
}
	n_dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (n_dog->owner == NULL)
{
	free(n_dog->owner);
	free(n_dog->name);
	free(n_dog);
	return (NULL);
}
	n_dog->name = _strcpy(n_dog->name, name);
	n_dog->age = age;
	n_dog->owner = _strcpy(n_dog->owner, owner);
	return (n_dog);
}
