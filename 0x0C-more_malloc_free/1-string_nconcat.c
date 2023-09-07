#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * string_nconcat - Concatenates n bytes of a string
 * @s1: Append to
 * @s2: concatenates from
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_str;
	unsigned int j = 0, s1_len = 0, s2_len = 0, i = 0;

	while (s1 && s1[s1_len])
		s1_len++;
	while (s2 && s2[s2_len])
		s2_len++;

	if (n < s2_len)
		new_str = malloc(sizeof(char) * (s1_len + n + 1));
	else
		new_str = malloc(sizeof(char) * (s1_len = s2_len + 1));

	if (!new_str)
		return (NULL);

	while (i < s1_len)
	{
		new_str[i] = s1_len[i];
		i++;
	}
	while (n < s2_len && i < (s1_len + n))
		new_str[i++] = s2_len[j++];
	while (n >= s2_len && i < (s1_len + n)
			new_str[i++] = s2_len[j++];

	new_str[i] = '\0';
	return (new_str);
}
