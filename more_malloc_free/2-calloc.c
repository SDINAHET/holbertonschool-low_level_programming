#include "main.h"
/*#include <stdlib.h>*/
/*#include "main.h"*/

/**
* _calloc - Allocates memory for an array of nmemb elements of size bytes each.
* @nmemb: Number of elements in the array.
* @size: Size in bytes of each element.
*
* Return: Pointer to the allocated memory, or NULL if nmemb or size is 0
*         or if malloc fails. The allocated memory is set to zero.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;
	char *fill;

	/* Return NULL if nmemb or size is 0 */
	if (nmemb == 0 || size == 0)
		return (NULL);

	/* Calculate the total size and allocate memory */
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	/* Set the allocated memory to zero */
	fill = ptr;
	for (i = 0; i < (nmemb * size); i++)
		fill[i] = 0;

	return (ptr);
}
