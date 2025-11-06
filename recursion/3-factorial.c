#include "main.h"

/**
 * factorial - retourne la factorielle d'un nombre
 * @n: nombre à calculer
 *
 * Return: factorielle de n, -1 si n < 0
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}

