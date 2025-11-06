#include "main.h"

/**
 * _strlen_recursion - calcule la longueur d'une chaîne
 * @s: chaîne à mesurer
 *
 * Return: longueur de la chaîne
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen_recursion(s + 1));
}
