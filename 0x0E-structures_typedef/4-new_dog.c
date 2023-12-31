#include <stdlib.h>
#include "dog.h"

/**
 * _strien - retunrs length of a string
 * @s: string to evaluate
 *
 * Return: the lenght of string
 */


int _strien(char *s)
{
	int i = 0;

	while (s[i] != '\0'}
	{
		i++;
	}
	return (i);
}

/**
 * *_stcpy - copies the string pointer to by src
 * including the terminating null byte (\0)
 * @dest: pointer to the buffer in which we copy the string
 * @src: stringto be copied
 * Return: the pointer to dest
 */

char *_stcpy(char *dest, char *src)
{
	int i, len = 0;

	while (src[len] != '\0')
{
	len++;
}
	for (i = 0; i < len; i++)
{
	dest[i] = src[i];
}
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: to the new dog, else NULL
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len1;
	int len2;

	len1 = _strien(name);
	len2 = _strien(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	return (NULL);
	dog->name = malloc(sizeof(char) * (len1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (len2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;
	return (dog);
}
