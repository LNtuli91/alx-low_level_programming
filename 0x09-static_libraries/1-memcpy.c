#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: memory to store
 * @src: memory where it is copied
 * @n: bytes
 *
 * Return: Copied memory with a byte
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	int j = n;

	for (; i < j; i++)
	{
		dest[i] = src[i];
			n--;
	}
	return (dest);
}
