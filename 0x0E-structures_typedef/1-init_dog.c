#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * init_dog - initializes a variable type
 * @d: struct pointer variable
 * @name: name
 * @age: age
 * @owner: owner
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	int i, j, k, l;

	if (d != NULL)
	{
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
		if (d->name == NULL)
		{
			exit(1);
		}
		d->owner = malloc(sizeof(char) * (j + 1));
		if (d->owner == NULL)
		{
			free(d->name);
			exit(1);
		}
		for (k = 0; k <= i; k++)
		{
			d->name[k] = name[k];
		}
		d->age = age;
		for (l = 0; l <= j; l++)
		{
			d->owner[l] = owner[l];
		}
	}
	else
	{
		exit(1);
	}
}
