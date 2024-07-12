#include <stdlib.h>
#include <stdio.h>
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

	/* Allocate memory and copy name */
	dog->name = _strdup(name) + 1;
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	/* Allocate memory and copy owner */
	dog->owner = _strdup(owner) + 1;
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	dog->age = age;

	return (dog);
}

/**
* _strlen - Calculate the length of a string
* @str: Pointer to the string
*
* Return: Length of the string
*/
unsigned int _strlen(char *str)
{
	unsigned int len = 0;

	while (str[len])
		len++;
	return (len);
}

/**
* _strdup - Duplicate a string in memory
* @str: Pointer to the string to duplicate
*
* Return: Pointer to the duplicated string, or NULL if malloc fails
*/
char *_strdup(char *str)
{
	unsigned int len = _strlen(str);
	char *dup = malloc(len);
	unsigned int i;

	if (dup == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
		dup[i] = str[i];
	return (dup);
}
