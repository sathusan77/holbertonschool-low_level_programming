#include "main.h"

/**
 * _strpbrk - cherche le premier caractère dans s qui correspond
 *            à l’un des caractères dans accept
 * @s: chaîne à analyser
 * @accept: ensemble de caractères à rechercher
 *
 * Return: pointeur vers le premier caractère correspondant dans s,
 *         ou NULL si aucun caractère n’est trouvé
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}
	return (0);
}
