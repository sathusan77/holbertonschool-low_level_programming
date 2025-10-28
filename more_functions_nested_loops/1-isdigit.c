#include "main.h"

/**
 * _isdigit - vérifie si le caractère est un chiffre (0 à 9)
 * @c: caractère à tester
 *
 * Return: 1 si c est un chiffre, 0 sinon
 */
int _isdigit(int c)
{
    if (c >= '0' && c <= '9')
        return (1);
    else
        return (0);
}
