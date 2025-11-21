#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings separated by a separator
 * @separator: string printed between strings (can be NULL)
 * @n: number of strings passed
 * @...: variable number of strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args; /* declare list of arguments */
	unsigned int i;
	char *str;

	va_start(args, n); /* initialize args to retrieve the arguments */

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *); /* get next argument */

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(args);
}

