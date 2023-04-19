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
	int k;

	k = 0;
	if (d->name != NULL)
	{
		while (d->name[k] != '\0')
		{
			k++;
		}
		printf("Name: %s\n", d->name);
	}
	else
	{
		printf("Name: (nil)\n");
	}
	if (d->age != 0)
	{
		printf("Age: %f\n", d->age);
	}
	else
	{
		printf("Age: (nil)\n");
	}
	k = 0;
	if (d->owner != NULL)
	{
		while (d->owner[k] != '\0')
		{
			k++;
		}
		printf("Owner: %s\n", d->owner);
	}
	else
	{
		printf("Owner: (nil)\n");
	}
}
