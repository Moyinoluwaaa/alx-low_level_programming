#include "dog.h"
/**
 * print_dog - the declared
 * @d: var
 * Description: This struct is for dog
 */
void print_dog(struct dog *d)
{
if (d == NULL)
{
return;
}
if (d->name == NULL)
printf("Name:  (nil)\n");
else
{
printf("Name: %s", d->name);
}
if (d->age == 0)
printf("Age:  (nil)\n");
else
{
printf("Age: %s", d->age);
}
if (d->owner == NULL)
printf("Name:  (nil)\n");
else
{
printf("Owner: %s", d->owner);
}
}
