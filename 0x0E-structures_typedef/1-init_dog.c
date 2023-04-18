#include "main.h"
#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initializes a struct type variable
 * @d: struct
 * @name: name
 * @age: age
 * @owner: owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	int i;

	i = 0;
	while (name[i] != '\0')
	{
		i++;
	}
	d->name = malloc(sizeof(char) * i + 1);
	for (i = 0; name[i] != '\0'; i++)
	{
		d->name[i] = name[i];
	}
	d->name[i] = '\0';
	d->age = age;
	i = 0;
	while (owner[i] != '\0')
	{
		i++;
	}
	d->owner = malloc(sizeof(char) * i + 1);
	for (i = 0; owner[i] != '\0'; i++)
	{
		d->owner[i] = owner[i];
	}
	d->name[i] = '\0';
}
