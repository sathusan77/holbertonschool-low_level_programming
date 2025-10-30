#include "main.h"

/**
 * print_triangle - prints a triangle using the character #
 * @size: the size of the triangle
 */
void print_triangle(int size)
{
	int i, j, space;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 1; i <= size; i++)
	{
		for (space = i; space < size; space++)
			_putchar(' ');

		for (j = 1; j <= i; j++)
			_putchar('#');

		_putchar('\n');
	}
}
