#include "dog.h"
#include <stdlib.h>
int _strlen(char *s)
char *_strcpy(char *dest, char *src);

/**
 *  new_dog - function that creates a new dog
 *  @name: the name of the dog
 *  @age: the age of the dog
 *  @owner: the owner of the dog
 *  Return: new struct dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
        dog_t *oscar;

        oscar = malloc(sizeof(dog_t));
        if (oscar == NULL)
                return (NULL);

        oscar->name = malloc(_strlen(name) + 1);
        oscar->owner = malloc(_strlen(owner) + 1);
        if (oscar->name == NULL || oscar->owner == NULL)
        {
                free(oscar->owner);
                free(oscar->name);
                free(oscar);
                return (NULL);
        }
        oscar->name = _strcpy(oscar->name, name);
        oscar->owner = _strcpy(oscar->owner, owner);
        oscar->age = age;
        return (oscar);
}

/**
 * _strlen - function that returns the length of a string.
 * @s: character
 * Return: Always 0.
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		i = i;
	}
	return (i);
}


/**
 * _strcpy - copies a string
 * @dest: pointer
 * @src: pointer destination
 *  Return: Always pointer.
 */

char *_strcpy(char *dest, char *src)
{
        char *p = dest;

        while (*src)
        {
                *dest++ = *src++;
        }
        *dest = 0;
        return (p);
}
