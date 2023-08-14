#ifndef DOG_H
#define DOG_H
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/**
 * struct dog - struct
 * @name: char
 * @age: float
 * @owner: char
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
