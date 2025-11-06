#include "main.h"

/**
 * _pow_recursion - retourne x élevé à la puissance y
 * @x: base
 * @y: exposant
 *
 * Return: x^y, -1 si y < 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}

