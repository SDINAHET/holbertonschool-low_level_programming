#include "function_pointers.h"

/**
* int_index - searches for an integer
* @array: array of integers
* @size: number of elements in the array
* @cmp: pointer to the function to be used to compare values
*
* Return: the index of the first element for which the cmp function
*         does not return 0, or -1 if no match is found or if size <= 0
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1); /*5-*/
	for (i = 0; i < size; i++) /*1-*/
	{
		if (cmp(array[i]) != 0)  /*2-*/
			return (i); /*3-*/
	}

	return (-1); /*4-*/
}

/*Prototype: int int_index(int *array, int size, int (*cmp)(int));*/
/*1-where size is the number of elements in the array array*/
/*2-cmp is a pointer to the function to be used to compare values*/
/*3-int_index returns the index of the first element-*/
/*-for which the cmp function does not return 0*/
/*4-If no element matches, return -1*/
/*5-If size <= 0, return -1*/

