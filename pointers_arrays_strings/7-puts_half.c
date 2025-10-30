#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: string to print the second half of
 */
void puts_half(char *str)
{
	int i, len, start;

	len = 0;

	/* calculate length of string */
	while (str[len] != '\0')
		len++;

	/* calculate starting index */
	if (len % 2 == 0)
		start = len / 2;
	else
		start = (len + 1) / 2;

	/* print second half */
	for (i = start; i < len; i++)
		_putchar(str[i]);

	_putchar('\n');
}
