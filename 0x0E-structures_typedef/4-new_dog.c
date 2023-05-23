#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - function creates new dog
 * @name: first member
 * @age: second member
 * @owner: third member
 * Return: struct of new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;
	int nlen, olen, i;


	nlen = olen = 0;
	while (name[nlen++])
		;
	while (owner[olen++])
		;


	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
		return (NULL);

	newdog->name = malloc(nlen * sizeof(newdog->name));
	if (newdog == NULL)
		return (NULL);

	for (i = 0; i < nlen; i++)
	{
		newdog->name[i] = name[i];
	}

	newdog->age = age;

	newdog->owner = malloc(olen * sizeof(newdog->owner));

	if (newdog == NULL)
		return (NULL);

	for (i = 0; i < olen; i++)
		newdog->owner[i] = owner[i];

	return (newdog);
}
