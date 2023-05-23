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
	dog_t *ndog;
	int nlen, olen, i;


	nlen = olen = 0;
	while (name[nlen++])
		;
	while (owner[olen++])
		;


	ndog = malloc(sizeof(dog_t));
	if (ndog == NULL)
		return (NULL);

	ndog->name = malloc(nlen * sizeof(ndog->name));
	if (ndog == NULL)
		return (NULL);

	for (i = 0; i < nlen; i++)
	{
		ndog->name[i] = name[i];
	}

	ndog->age = age;

	ndog->owner = malloc(olen * sizeof(ndog->owner));

	if (ndog == NULL)
		return (NULL);

	for (i = 0; i < olen; i++)
		ndog->owner[i] = owner[i];

	return (ndog);
}
