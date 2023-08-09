#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - Cancatenates two strings of any size
 * @s1: the first to concatenate
 * @s2: the second string to concatenate
 *
 * Return: the two strings concatenated
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, k = 0, l = 0;
	char *S;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[i])
		i++;

	while (s2[j])
		j++;

	l = i + j;
	S = malloc((sizeof(char) * l) + 1);

	if (S == NULL)
		return (NULL);

	j = 0;

	while (k < l)
	{
		if (k <= i)
			S[k] = s1[k];

		if (k >= i)
		{
			S[k] = s2[j];
			j++;
		}

		k++;
	}

	S[k] = '\0';
	return (S);
}
