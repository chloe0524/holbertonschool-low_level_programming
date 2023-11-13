#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - creates a new struct of type dog
 * @name: struct parameter name
 * @age: struct parameter age
 * @owner: struct parameter owner
 * Return: returns pointer to buffer of datatype dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggy = malloc(sizeof(dog_t));

	if (doggy == NULL)
		return NULL;

	doggy->name = strdup(name);
	doggy->owner = strdup(owner);

	if (doggy->name == NULL || doggy->owner == NULL)
	{
		free(doggy->name);
		free(doggy->owner);
		free(doggy);
		return NULL;
	}

	doggy->age = age;

	return doggy;
}

