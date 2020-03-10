#include "dog.h"
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
struct dog d = {
.name = name,
.age = age,
.owner = owner
};
}
