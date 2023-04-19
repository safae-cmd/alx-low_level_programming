#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: new name
 * @age: new age
 * @owner: new owner
 * Return: dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int i, j;

	d = malloc(sizeof(dog_t));
	if (!d || !name || !owner)
	{
		free(d);
		return (NULL);
	}
	i = 0;
	while (name[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (owner[j] != '\0')
	{
		j++;
	}
	d->name = malloc(sizeof(char) * (i + 1));
	d->owner = malloc(sizeof(char) * (j + 1));
	if (!d->name || !d->owner)
	{
		free(d->name);
		free(d->owner);
		free(d);
		return (NULL);
	}
	for (i = 0; name[i] != '\0'; i++)
	{
		d->name[i] = name[i];
	}
	d->name[i] = '\0';
	for (j = 0; owner[j] != '\0'; j++)
	{
		d->owner[j] = owner[j];
	}
	d->owner[j] = '\0';
	d->age = age;
	return (d);
}
