#ifndef _DOG_H
#define _DOG_H


/**
 * dog_t - Typedef for struct dog
 */


/**
 * struct dog - Represents information about a dog.
 * @name: Pointer to the dog's name.
 * @age: Age of the dog.
 * @owner: Pointer to the owner's name.
 *
 * Description: This structure contains information about a dog.
 */

typedef struct dog
{
char *name;
float age;
char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
