#include <stdio.h>
#include "dog.h"

/**
* print_dog - Prints a struct dog
* @d: Pointer to struct dog
*
* Description: Prints the name, age, and owner of a dog.
* If name is NULL, print NAME: (nil)
* If any element of d is NULL, print (nil) instead.
* If the pointer d is NULL, print nothing.
*/
void print_dog(struct dog *d)
{
	if (d == NULL) /*If the pointer d is NULL, print nothing.*/
		return;

	if (d->name == NULL) /* If name is NULL, print NAME: (nil)*/
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);

	printf("Age: %f\n", d->age);

	if (d->owner == NULL) /*If owner is NULL, print OWNER: (nil)*/
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
