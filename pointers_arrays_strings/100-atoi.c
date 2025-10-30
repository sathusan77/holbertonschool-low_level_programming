#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: the string to convert
 *
 * Return: the integer representation
 */
int _atoi(char *s)
{
	int i = 0, sign = 1, num = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;
		else if (s[i] >= '0' && s[i] <= '9')
		{
			num = num * 10 + (s[i] - '0');
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
		}
		i++;
	}

	return (num * sign);
}
