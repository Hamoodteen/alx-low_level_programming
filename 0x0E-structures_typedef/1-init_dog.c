#include "dog.h"
/**
 * init_dog - f
 * @d: struct
 * @name: char
 * @age: float
 * @owner: char
 * Return: void
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
