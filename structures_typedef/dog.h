#ifndef DOG_H
#define DOG_H
#include <stdio.h>
#include <stdlib.h>

/**
* struct dog - a new type describing a dog
* @name: name of the dog (char pointer)
* @age: age of the dog (float)
* @owner: owner of the dog (char pointer)
*/
struct dog

{
	char *name;
	float age;
	char *owner;
};

/*1_Prototype of the init_dog function*/
void init_dog(struct dog *d, char *name, float age, char *owner);

/*2_Prototype of the print_dog function*/
void print_dog(struct dog *d);

/*3_Define a new type dog_t as a new name for the type struct dog*/
typedef struct dog dog_t;

/*4_Prototype of function that creates a new dog*/
dog_t *new_dog(char *name, float age, char *owner);
unsigned int _strlen(char *str);
char *_strdup(char *str);

/*5_Prototype of function that frees dogs*/
void free_dog(dog_t *d);

#endif /* DOG_H */
