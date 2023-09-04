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
	int i, r = 0;
	char *dup;

	if (str == NULL)
		return (NULL);

	i = 0;
	while (str[i] != '\0')
		i++;

	dup = malloc(sizeof(char) * (i + 1));

	if (dup == NULL)
		return (NULL);

	for (r = 0; str[r]; r++)
		dup[r] = str[r];

	return (dup);
}
