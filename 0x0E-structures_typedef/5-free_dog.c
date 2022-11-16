#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - function that free dogs
 * @d: pointer type dog_t to be free
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
