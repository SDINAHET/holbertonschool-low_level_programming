#include "function_pointers.h"

/**
* array_iterator - executes a function given as a parameter
*                  on each element of an array.
* @array: array of integers
* @size: size of the array
* @action: pointer to the function you need to use
*
* Return: Nothing.
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]); /*run function*/
		}
	}
}

/*0 in decimal is 0x0 in hexadecimal.*/
/*98 in decimal is 0x62 in hexadecimal.*/
/* 98/16 reste2 quotient 6 & 6/16 reste6 quotient 0 on obtient 62*/
/*402 in decimal is 0x192 in hexadecimal.*/
/*1024 in decimal is 0x400 in hexadecimal.*/
/*4096 in decimal is 0x1000 in hexadecimal.*/

/*0*/
/*98*/
/*402*/
/*1024*/
/*4096*/
/*0x0*/
/*0x62*/
/*0x192*/
/*0x400*/
/*0x1000+*/

/*https://www.rapidtables.com/convert/number/decimal-to-hex.html?x=98*/
