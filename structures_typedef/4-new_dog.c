#include "dog.h"
#include <stdlib.h>

/**
 * _strcopy - copy read-only data to mutable.
 * @dst: pointer to copy char to.
 * @src: read-only data.
 */
void _strcopy(char *dst, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dst[i] = src[i];
	dst[i] = '\0';
}

/**
 * new_dog - create a new dog.
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ouaoua;
	int a, b;


	for (a = 0; name[a]; a++)
		;
	for (b = 0; owner[b]; b++)
		;


	ouaoua = malloc(sizeof(dog_t));
	if (ouaoua == NULL)
		return (NULL);


	ouaoua->name = malloc(a + 1);
	ouaoua->owner = malloc(b + 1);

	if (ouaoua->name == NULL || ouaoua->owner == NULL)
	{

		free(ouaoua->name);
		free(ouaoua->owner);
		free(ouaoua);
		return (NULL);
	}


	_strcopy(ouaoua->name, name);
	_strcopy(ouaoua->owner, owner);
	ouaoua->age = age;

	return (ouaoua);
}
