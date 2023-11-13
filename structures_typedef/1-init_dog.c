#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - Initializes a dog structure
 * @d: Pointer to dog struct
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Owner's name
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{

	d->name = name;
	d->age = age;
	d->owner = owner;
}
