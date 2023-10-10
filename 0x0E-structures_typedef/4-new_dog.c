#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - func that finds the length of string
 * @str: takes string (pointer)
 * Return: length of string
*/

int _strlen(char *str)
{
	int len = 0;

	while (*str)
	{
		len++;
		str++;
	}
	return (len);
}

/**
 * _strcpy - copy s2 into s1
 * @s1: string contain copy of s2
 * @s2: string will be copy to s1
 * Return: s1 contain copy of s2
*/

char *_strcpy(char *s1, char *s2)
{
	int i;

	for (i = 0; s2[i]; i++)
		s1[i] = s2[i];
	s1[i] = '\0';
	return (s1);
}

/**
 * new_dog - finc that create new dog struct
 * @name: name of dog
 * @age: age of dog
 * @owner: dog owner
 * Return: pointer to new struct dog
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (!name || age < 0 || !owner)
		return (NULL);
	dog = (dog_t *)malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if ((*dog).owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	dog->name = _strcpy(dog->name, name);
	dog->age = age;
	dog->owner = _strcpy(dog->owner, owner);
	return (dog);
}
