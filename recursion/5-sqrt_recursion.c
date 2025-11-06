#include "main.h"

/**
 * _sqrt_helper - fonction récursive pour trouver la racine carrée
 * @n: nombre dont on cherche la racine
 * @i: valeur courante testée
 *
 * Return: racine carrée naturelle ou -1 si n n'en a pas
 */
int _sqrt_helper(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_sqrt_helper(n, i + 1));
}

/**
 * _sqrt_recursion - retourne la racine carrée naturelle de n
 * @n: nombre
 *
 * Return: racine carrée de n ou -1 si n n'en a pas
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_helper(n, 0));
}

