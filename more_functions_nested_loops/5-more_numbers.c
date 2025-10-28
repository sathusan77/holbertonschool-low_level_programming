#include "main.h"

/**
 * more_numbers - affiche les chiffres de 0 à 14, 10 fois
 *
 * Return: rien
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
				_putchar('1');      /* chiffre des dizaines */
			_putchar('0' + j % 10); /* chiffre des unités */
		}
		_putchar('\n');
	}
}
