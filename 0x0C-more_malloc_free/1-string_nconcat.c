#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *
 *
 *
 *
 */

unsigned int _strlen(char *s)
{
	unsigned int i;
	while (s[i] != 0)
	{
		i++;
	}
	return(i);
}

/**
 *
 *
 *
 *
 */


char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len1;
	char *str;
	len1 = _strlen(s1);

	if (n > _strlen(s2))
		n = _strlen(s2);

	str = malloc((len1 * sizeof(char)) + n + 1);
	if (str == NULL)
	{
		return (NULL);
	}
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != 0; i++)
		str[i] = s1[i];
	for (j = 0; j < n; j++, i++)
		str[i] = s2[j];

	return (str);

}
