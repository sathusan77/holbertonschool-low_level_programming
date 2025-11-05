#include "main.h"

/**
 * _strchr - localise un caractère dans une chaîne
 * @s: la chaîne à analyser
 * @c: le caractère à chercher
 *
 * Return: pointeur vers la première occurrence de c dans s,
 *         ou NULL si le caractère n’est pas trouvé
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}

	if (*s == c) /* pour inclure le cas du '\0' */
		return (s);

	return (0);
}
