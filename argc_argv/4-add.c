#include "main.h"

/**
 * is_number - checks if a string contains only digits
 * @s: string to check
 *
 * Return: 1 if string is a number, 0 otherwise
 */
int is_number(char *s)
{
	int i = 0;

	if (s[0] == '\0')
		return (0);

	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

