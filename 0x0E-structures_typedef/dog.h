#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure of dog
 * @name: name of the dog
 * @age: age of dog
 * @owner: onewr of the dog
 * Description: Longer description
 */

struct dog
{
	char *name;
	float age;
	char owner;
};

/**
 * dog_d - typedef for struct dog
 */
typedef struct dog dog_d;


#endif
