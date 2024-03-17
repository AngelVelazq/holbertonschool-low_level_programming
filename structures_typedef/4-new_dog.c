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
		n++;
	while (owner[o++])
		o++;

	doggy = malloc(sizeof(dog_t));
	if (doggy == NULL)
		return (NULL);

	doggy->name = malloc((n + 1) * sizeof(doggy->name));
	if (doggy->name == NULL)
	{
		free(doggy);
		return (NULL);
	}
	for (i = 0; i < n; i++)
		doggy->name[i] = name[i];
	doggy->name[n] = '\0';

	doggy->age = age;

	doggy->owner = malloc((o + 1) * sizeof(doggy->owner));
	if (doggy->owner == NULL)
	{
		free(doggy->name);
		free(doggy);
		return (NULL);
	}
	for (i = 0; i < o; i++)
		doggy->owner[i] = owner[i];
	doggy->owner[o] = '\0';

	return (doggy);
}
