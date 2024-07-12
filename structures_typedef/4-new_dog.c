#include <stdlib.h>
#include <stdio.h>
/*#include <string.h>*/
#include "dog.h"

/**
* new_dog - Creates a new dog.
* @name: Pointer to the name of the dog.
* @age: Age of the dog.
* @owner: Pointer to the owner of the dog.
*
* Return: Pointer to the new dog (dog_t), or NULL if the function fails.
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	/* Allocate memory for the new dog structure */
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	/* Allocate memory for the owner strings */
	dog->name = malloc(strlen(name) + 1);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	/* Allocate memory for the owner strings */
	dog->owner = malloc(strlen(owner) + 1);
	if (new_owner == NULL)
	{
		free(new_name);
		free(dog);
		return (NULL);
	}

	printf("Name: (nil)\n");
	printf("Owner: (nil)\n");

	return (dog);
}
