#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "dog.h"
/**
 * print_dog - Prints information about a dog.
 * @d: Pointer to the struct dog to be printed.
 *
 * Description: This function prints the name, age, and owner of the dog.
 * If a member is NULL, it prints "(nil)" instead.
 */



void print_dog(struct dog *d)
{

if (d == NULL)
return;

d->name ? printf("Name: %s\n", d->name) : printf("(nil)\n");
d->age ? printf("Age: %f\n", d->age) : printf("(nil)\n");
d->owner ? printf("Owner: %s\n", d->owner) : printf("(nil)\n");
}
