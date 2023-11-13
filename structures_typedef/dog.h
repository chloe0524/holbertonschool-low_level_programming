#ifndef DOG
#define DOG

/**
 * struct dog - intializes a variable of type struct dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * description:
 * Defines a structure 'struct_dog' to store information about a dog,
 * including its name, age, and owner.
 * Return: nothing
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

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);

#endif /* DOG */
