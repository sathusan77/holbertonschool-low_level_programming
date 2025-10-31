#include "main.h"

/**
 * _atoi - convertit une chaîne en entier
 * @s: chaîne à convertir
 *
 * Return: entier correspondant à la chaîne
 */
int _atoi(char *s)
{
	int i = 0, sign = 1;
	unsigned int result = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;
		else if (s[i] >= '0' && s[i] <= '9')
		{
			result = result * 10 + (s[i] - '0');
		}
		else if (result > 0)
			break;
		i++;
	}

	return ((int)(result * sign));
}
