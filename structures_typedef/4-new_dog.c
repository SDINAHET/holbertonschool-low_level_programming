#include <stdlib.h>
#include <string.h>
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
	char *new_name, *new_owner;

	/* Allocate memory for the new dog structure */
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	/* Allocate memory and copy the name */
	new_name = malloc(strlen(name) + 1);
	if (new_name == NULL)
	{
		free(dog);
		return (NULL);
	}
	strcpy(new_name, name);

	/* Allocate memory and copy the owner */
	new_owner = malloc(strlen(owner) + 1);
	if (new_owner == NULL)
	{
		free(new_name);
		free(dog);
		return (NULL);
	}
	strcpy(new_owner, owner);

	/* Initialize the new dog structure */
	dog->name = new_name;
	dog->age = age;
	dog->owner = new_owner;

	return (dog);
}
