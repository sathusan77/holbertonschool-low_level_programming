#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - imprime la somme des deux diagonales d'une matrice carrée
 * @a: pointeur vers le tableau (matrix)
 * @size: taille de la matrice
 *
 * Return: rien
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i * size + i];
		sum2 += a[i * size + (size - 1 - i)];
	}

	printf("%d, %d\n", sum1, sum2);
}
