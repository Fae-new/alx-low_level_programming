#include "dog.h"

/**
 * init_dog - Initializes a struct dog with provided values.
 * @d: Pointer to the struct dog to be initialized.
 * @name: Pointer to a character array representing the dog's name.
 * @age: Age of the dog.
 * @owner: Pointer to a character array, the dog owner's name.
 *
 * Description: This functioninitialises a struct dog.
 */


void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
