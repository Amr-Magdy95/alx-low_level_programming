#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - desc
 * @d: dog_t
 * Return: none
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
