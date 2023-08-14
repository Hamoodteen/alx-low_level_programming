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
	dog = malloc(sizeof(dog));
	if (dog == NULL)
	{
		free(dog);
		return (NULL);
	}
	/* dog->name = malloc(sizeof(name));
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
	} */
	dog->name = name;
	dog->age = age;
	dog->owner = owner;
	return (dog);
}
