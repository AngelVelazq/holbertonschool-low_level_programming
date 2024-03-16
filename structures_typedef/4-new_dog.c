#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - new dog created
 * @name: name of new dog
 * @age: age of new dog
 * @owner: owner of new dog
 * Return: pointer to the new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int n = 0, o = 0, i;
	dog_t *doggy;

	while (name[n++])
		;
	while (owner[o++])
		;

	doggy = malloc(sizeof(dog_t));
	if (doggy == NULL)
		return (NULL);

	doggy->name = malloc(n * sizeof(doggy->name));
	if (doggy == NULL)
	{
		free(doggy);
		return (NULL);
	}
	for (i = 0; i < n; i++)
		doggy->name[i] = name[i];

	doggy->age = age;

	doggy->owner = malloc(o * sizeof(doggy->owner));
	if (doggy == NULL)
	{
		free(doggy->name);
		free(doggy);
	}
		return (NULL);
	for (i = 0; i < o; i++)
		doggy->owner[i] = owner[i];

	return (doggy);
}
