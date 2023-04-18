#include "main.h"
#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - prints struct
 * @d: pointer to struct
 * Return: void
 */
void print_dog(struct dog *d)
{
	char *name, *owner;
	float age;

	int i;

	i = 0;
	while (name[i] != '\0')
		i++;
	d->name = malloc(sizeof(char) * (i + 1));
	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);
	d->age = age;
	if (d->age == 0)
		printf("Age: (nil)\n");
	else
		printf("Age: %f\n", d->age);
	i = 0;
	while (owner[i] != '\0')
		i++;
	d->owner = malloc(sizeof(char) * (i + 1));
	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
