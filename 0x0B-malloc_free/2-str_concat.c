#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * str_concat - point to a newly allocated space in memory
 * @s1: input 1 contact
 * @s2: input 2 contact
 *
 * Return: contact of s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	char *contact;
	int i, p;

	if (s1 == NULL)
		s1 = "";

	i = p = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[p] != '\0')
		p++;
	contact = malloc(sizeof(char) * (i + p + 1));

	if (contact == NULL)
		return (NULL);
	i = p = 0;
	while (s1[i] != '\0')
	{
		contact[i] = s1[i];
		p++, i++;
	}
	while (s2[p] != '\0')
	{
		contact[p] = s2[p];
		p++;
		i++;
	}
	contact[i] = '\0';
	return (contact);
}
