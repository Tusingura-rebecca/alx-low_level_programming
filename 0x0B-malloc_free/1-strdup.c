#include "main.h"

/**
*_strdup -  returns a pointer to a newly allocated space in
*memory, which contains a copy of the string given as a parameter
*@str: string to be copied
*Return:  pointer to the duplicated string on success
*NULL in case of error
*/
char *_strdup(char *str)
{
	char *cp;
	int i, len;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		len++;
	cp = malloc(sizeof(char) * (len + 1));

	if (cp == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
	{
		cp[i] = str[i];
	}

	cp[len] = '\0';
	return (cp);
}
