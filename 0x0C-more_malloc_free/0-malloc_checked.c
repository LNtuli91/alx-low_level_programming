#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocate memory
 * @b: number of byte to be allocated
 *
 * Return: A pointer to the allocared memory
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);

	return (p);
}
