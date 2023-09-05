#include <stdlib.h>
#include <string.h>

/**
 * **strtow - split a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (Success)
 * or NUll
 */

char **strtow(char *str)
{
	char **words;
	int i, j, k, len, count;

	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}

	len = strlen(str);
	words = malloc((len + 1) * sizeof(char *));
	if (words == NULL)
	{
		return (NULL);
	}

	count = 0;
	for (i = 0; i < len; i++)
	{
		if (str[i] != ' ')
		{
		count++;
		for (j = i; j < len && str[j] != ' '; j++);
		words[count - 1] = malloc((j - i + 1) * sizeof(char));
		if (words[count - 1] == NULL)
		{
			for (k = 0; k < count - 1; k++)
			{
				free(words[k]);
			}
			free(words);
			return (NULL);
			}
			strncpy(words[count - 1], &str[i], j - i);
			words[count - 1][j - i] = '\0';
			i = j;
		}
	}

	words[count] = NULL;
	return (words);
}
