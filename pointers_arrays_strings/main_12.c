#include "main.h"
#include <stdio.h>
#include <limits.h>

/**
 * main - check the code for _atoi with INT_MIN
 *
 * Return: Always 0.
 */
int main(void)
{
    printf("%d\n", _atoi("-2147483648"));
    return (0);
}
