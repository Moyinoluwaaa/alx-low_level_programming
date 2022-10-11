#include "dog.h"
#include <stdio.h>
/**
 * print_dog - the declared
 * @d: var
 * Description: This struct is for dog
 */
void print_dog(struct dog *d)
{
if (d == 0)
{
return;
}
if (d->name == 0)
printf("Name:  (nil)\n");
else
{
printf("Name: %s", d->name);
}
if (d->age == 0)
printf("Age:  (nil)\n");
else
{
printf("Age: %f", d->age);
}
if (d->owner == 0)
printf("Name:  (nil)\n");
else
{
printf("Owner: %s", d->owner);
}
}
