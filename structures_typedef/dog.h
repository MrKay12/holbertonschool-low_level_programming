#ifndef dog_h
#define dog_h

/**
 * struct dog - definition
 *
 *@name: read
 *@age: the
 *@owner: @
 *
 *Return: Always 0
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
