#ifndef MAIN_H
#define MAIN_H
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
#ifndef DOG_H
#define DOG_H
/**
 * struct dog - struct
 * @name: name
 * @age: age
 * @owner: owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif
