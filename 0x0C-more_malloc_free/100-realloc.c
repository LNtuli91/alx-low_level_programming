#include <stdlib.h>
#include <string.h>

/**
 * _realloc -  reallocates a memory block using malloc and free
 * @ptr: Pointer to previous memory allocated by mall
 * @old_size: Size of allocated memory for ptr
 * @new_size: New size of the new memory block
 *
 * Return: pointer to the newly allocated memory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
			return (NULL);
		return (new_ptr);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);

	if (old_size > new_size)
		old_size = new_size;

	memcpy(new_ptr, ptr, old_size);
	free(ptr);

	return (new_ptr);
}
