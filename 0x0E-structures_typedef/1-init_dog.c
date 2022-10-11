#include "dog.h"
/**
 * init_dog - the declared
 * @d: var
 * @name: var
 * @age: bsj
 * @owner: djd
 * Description: This struct is for dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
{
return;
}
else
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
