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
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
