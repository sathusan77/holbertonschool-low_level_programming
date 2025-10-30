#include "main.h"

/**
 * rev_string - reverses a string
 * @s: the string to reverse
 */
void rev_string(char *s)
{
	int len = 0, i;
	char temp;

	/* Calculer la longueur de la chaîne */
	while (s[len] != '\0')
		len++;

	/* Échanger les caractères de part et d'autre */
	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = temp;
	}
}
