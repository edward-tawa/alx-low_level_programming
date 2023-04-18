#include "dog.h"
/**
 * init_dog - function to initialize a variable
 * @d: pointer to dog structure
 * @name: name to initialize
 * @age: age of dog
 * @owner: owner of dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;

}
