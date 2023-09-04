#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _strdup - duplicate to new memory space
 * @str: char
 *
 * Return: 0
 */

char *_strdup(char *str)
{
	char *dup = malloc(strlen(str) + 1);

	if (str == NULL)
		return (NULL);

	if (dup == NULL)
		return (NULL);
	strcpy(dup, str);
	return (dup);
}
