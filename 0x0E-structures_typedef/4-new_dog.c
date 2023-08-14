#include "dog.h"
/**
 * new_dog - f
 * @name: char
 * @age: float
 * @owner: char
 * Return: struct
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog;
int n;
int o;
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->name = malloc(sizeof(name));
	if (dog->name == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(owner));
	if (dog->owner == NULL)
	{
		free(dog->owner);
		free(dog);
		return (NULL);
	}
	for (n = 0 ; name[n] != '\0' ; n++)
	{
		dog->name[n] = name[n];
	}
	dog->age = age;
	for (o = 0 ; owner[o] != '\0' ; o++)
	{
		dog->owner[o] = owner[o];
	}
	return (dog);
}
