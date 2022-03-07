#ifndef DOG_h
#define DOG_h

/**
 * struct dog - Define a new type struct dog
 * @name: character
 * @age: float
 * @owner: character
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
