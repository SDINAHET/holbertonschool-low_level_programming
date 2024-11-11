#include <stdlib.h>

/**
 * copy_data - Copies data from the old memory block to the new one.
 * @old_data: Pointer to the old memory block.
 * @new_data: Pointer to the new memory block.
 * @size: Number of bytes to copy.
 */
void copy_data(unsigned char *old_data, unsigned char *new_data,
	       unsigned int size)
{
	unsigned int i;

	for (i = 0; i < size; i++)
	{
		new_data[i] = old_data[i];
	}
}

/**
 * malloc_new_block - Allocates a new memory block of new_size and handles erro
 * @new_size: Size of the new memory block.
 * Return: Pointer to the newly allocated memory or NULL if allocation fails.
 */
void *malloc_new_block(unsigned int new_size)
{
	void *new_ptr = malloc(new_size);

	if (new_ptr == NULL)
	{
		return (NULL); /* Memory allocation failed */
	}

	return (new_ptr);
}

/**
 * _realloc - Reallocates a memory block using malloc and free.
 * @ptr: Pointer to the memory previously allocated with malloc(old_size).
 * @old_size: Size of the allocated space for ptr.
 * @new_size: New size of the new memory block.
 *
 * Return: Pointer to the newly allocated memory, or NULL if failed.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	/* If new_size is zero and ptr is not NULL, free ptr and return NULL. */
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	/* If ptr is NULL, the function is equivalent to malloc(new_size). */
	if (ptr == NULL)
	{
		return (malloc_new_block(new_size));
	}

	/* If new_size is equal to old_size, do nothing and return ptr. */
	if (new_size == old_size)
	{
		return (ptr);
	}

	/* Allocate new memory block with new_size */
	new_ptr = malloc_new_block(new_size);
	if (new_ptr == NULL)
	{
		return (NULL); /* Memory allocation failed */
	}

	if (old_size < new_size)
	{
		copy_data((unsigned char *)ptr, (unsigned char *)new_ptr, old_size);
	}
	else
	{
		copy_data((unsigned char *)ptr, (unsigned char *)new_ptr, new_size);
	}

	free(ptr);

	return (new_ptr);
}
