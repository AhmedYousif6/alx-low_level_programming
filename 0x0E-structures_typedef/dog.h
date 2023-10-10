#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure named dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Description: structure contain the name and age and owner
 * of a dog
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);

typedef struct dog dog_t;

#endif
