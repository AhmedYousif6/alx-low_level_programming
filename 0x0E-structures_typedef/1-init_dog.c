#include "dog.h"

/**
 * init_dog - initialize dog's name, age and owner
 * @d: pointer to struct dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: nothing
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
