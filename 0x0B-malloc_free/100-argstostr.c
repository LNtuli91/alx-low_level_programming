#include <stdlib.h>
#include <string.h>

/**
 * argstostr - entry
 * @ac: integer input
 * @av: double pointer array
 *
 * Return: 0
 */

char *argstostr(int ac, char **av)
{
	int i, j, r = 0, len = 0;
	char *str;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		len++;
	}
	len += ac;

	str = malloc(sizeof(char) * len + 1);
	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0, j = 0; i < ac; i++)
	{
	for (j = 0; av[i][j]; j++)
	{
		str[r] = av[i][j];
		r++;
	}
	if (str[r] == '\0')
	{
		str[r++] = '\n';
	}
	}

	return (str);
}
