#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - new dog struct whose variable is
 * to be initialized
 * @d: pointer to struct of the new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: who owns the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
		d->name = name;
		d->age = age;
		d->owner = owner;
}
