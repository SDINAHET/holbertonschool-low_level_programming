#include <stdlib.h>

/**
 * _realloc - Reallocates a memory block using malloc and free
 * @ptr: Pointer to the memory previously allocated with malloc(old_size)
 * @old_size: Size of the allocated space for ptr
 * @new_size: New size of the new memory block
 *
 * Return: Pointer to the newly allocated memory, or NULL if failed
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr; /* Declare new_ptr at the top */

	/* If new_size is zero and ptr is not NULL, free ptr and return NULL */
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	/* If ptr is NULL, the function is equivalent to malloc(new_size) */
	if (ptr == NULL)
	{
		return (malloc(new_size));
	}

	/* If new_size is equal to old_size, do nothing and return ptr */
	if (new_size == old_size)
	{
		return (ptr);
	}

	/* Use realloc to resize the memory block */
	new_ptr = realloc(ptr, new_size);

	return (new_ptr);
}
