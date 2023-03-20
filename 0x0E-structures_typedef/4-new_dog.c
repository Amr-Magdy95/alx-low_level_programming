#include "dog.h"
/**
 * new_dog - desc
 * @name: char *
 * @age: float
 * @owner: char *
 * Return: dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *res = malloc(sizeof(dog_t));

	if (res == NULL)
		return (NULL);
	int nameLen = 0, ownerLen = 0, i = 0, j = 0, k = 1;

	while (name[nameLen] != '\0')
		nameLen++;
	while (owner[ownerLen] != '\0')
		ownerLen++;
	nameLen++;
	ownerLen++;
	res->name = malloc(nameLen);
	if (res->name == NULL)
		return (NULL);
	res->owner = malloc(ownerLen);
	if (res->owner == NULL)
		return (NULL);
	res->age = age;

	while (k == 1)
	{
		res->name[i] = name[i];
		if (name[i] == '\0')
			break;
		i++;
	}

	while (k == 1)
	{
		res->owner[j] = owner[j];
		if (owner[j] == '\0')
			break;
		j++;
	}
	return (res);
}
