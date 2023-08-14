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
	dog = malloc(sizeof(dog->name) + sizeof(dog->age) + sizeof(dog->owner));
	dog->name = name;
	dog->age = age;
	dog->owner = owner;
	if (dog == NULL)
	{
		return (NULL);
	}
	return (dog);
}
