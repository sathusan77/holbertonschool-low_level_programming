#include "main.h"

/**
 * _puts_recursion - affiche une chaîne suivie d'un saut de ligne
 * @s: la chaîne à afficher
 *
 * Return: rien
 */
void _puts_recursion(char *s)
{
	if (*s == '\0') /* fin de la chaîne */
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);      /* affiche le caractère courant */
	_puts_recursion(s + 1); /* appel récursif pour le reste */
}
