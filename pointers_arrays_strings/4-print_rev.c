#include "main.h"

/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: the string to print
 */
void print_rev(char *s)
{
	int len = 0;

	/* Calculer la longueur de la chaîne */
	while (s[len] != '\0')
		len++;

	/* Afficher la chaîne en commençant par la fin */
	while (len > 0)
	{
		_putchar(s[len - 1]);
		len--;
	}
	_putchar('\n');
}
