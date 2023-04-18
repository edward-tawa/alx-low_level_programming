#include "dog.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * print_dog - function to print dog
 *@d: variable to dog structure
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		printf("nil");
	if (d ->name == NULL)
		printf("nil");
	if (d->owner == NULL)
		printf("nil");

	printf("Name: %s\n",d->name);
	printf("Age: %f\n",d->age);
	printf("Owner: %s\n",d->owner);
}
