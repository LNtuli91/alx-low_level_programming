#include "main.h"
#include <stdlib.h>

/**
 * create_array - create arrayof size and assign char c
 * @size: size of array
 * @c: char to assign
 *
 * Return: arr, NULL if fail
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr = malloc(size * sizeof(char));

	if (size == 0 || arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = c;
	return (arr);
}
