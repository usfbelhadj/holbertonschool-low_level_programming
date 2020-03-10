#include "dog.h"
/**
*free_dog - free
*@d: struct
*Return: Void
*/
void free_dog(dog_t *d)
{
if (d)
{
free(d->name);
free(d->owner);
free(d);
}
}