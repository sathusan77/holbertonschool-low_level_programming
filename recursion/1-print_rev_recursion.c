#include "main.h"

/**
 * _print_rev_recursion - affiche une chaîne en reverse
 * @s: chaîne à afficher
 *
 * Return: rien
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0') /* fin de la chaîne */
		return;

	_print_rev_recursion(s + 1); /* appel récursif pour le reste */
	_putchar(*s); /* affiche le caractère courant après l'appel */
}
