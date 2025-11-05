#include "main.h"

/**
 * _strstr - trouve la première occurrence d’une sous-chaîne
 * @haystack: la chaîne principale à parcourir
 * @needle: la sous-chaîne à chercher
 *
 * Return: pointeur vers le début de la sous-chaîne trouvée,
 *         ou NULL si elle n’est pas trouvée
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	if (*needle == '\0')
		return (haystack);

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}
		if (needle[j] == '\0')
			return (haystack + i);
	}

	return (0);
}
