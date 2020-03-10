#include "dog.h"
#include <stdio.h>
/**
 *init_dog - struct dog
 *@d: struct
 *@name: name of the dog
 *@owner: the owner of the dog
 *@age: the age of the dog
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
return;
{
d->name = name;
d->age = age;
d->owner = owner;
};
}
