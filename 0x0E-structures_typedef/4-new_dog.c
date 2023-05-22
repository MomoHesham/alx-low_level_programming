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

	newdog = malloc(sizeof(dog_t));

	if (newdog == NULL)
		return (NULL);
	newdog->name = name;
	newdog->age = age;
	newdog->owner = owner;
	return (newdog);
}
