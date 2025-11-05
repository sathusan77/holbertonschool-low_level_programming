#include "main.h"

/**
 * _strspn - calcule la longueur du segment initial de s
 *           composé uniquement de caractères présents dans accept
 * @s: la chaîne à analyser
 * @accept: la chaîne contenant les caractères autorisés
 *
 * Return: le nombre d’octets dans le segment initial de s
 *         qui ne contiennent que des caractères de accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, count;

	count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				break;
		}

		if (accept[j] == '\0')
			break;

		count++;
	}
	return (count);
}
