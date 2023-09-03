#include "main.h"

/**
 * _strncat - concatanates strings
 * @dest: entered value
 * @arc: entered value
 * @n: value
 *
 * Return: dest
 */

char *_strncat(char *dest, char *arc, int n)
{
	int a, b;

	a = 0;
	while (dest[a] != '\0')
	{
		n++;
	}
	b = 0;
	while (b < n && arc[b] != '\0')
	{
		dest[a] = arc[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
