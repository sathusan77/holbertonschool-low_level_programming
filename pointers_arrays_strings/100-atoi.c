#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: the string to convert
 *
 * Return: the integer representation
 */
int _atoi(char *s)
{
	int i = 0, sign = 1, num = 0, digit;

	while (s[i] && (s[i] < '0' || s[i] > '9'))
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}

	while (s[i] && (s[i] >= '0' && s[i] <= '9'))
	{
		digit = s[i] - '0';

		if (sign == 1 && num > (2147483647 - digit) / 10)
			return 2147483647;
		if (sign == -1 && num > (2147483647 - digit + 1) / 10)
			return -2147483648;

		num = num * 10 + digit;
		i++;
	}

	return (num * sign);
}

