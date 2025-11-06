#include <stdio.h>

/**
 * main - prints the program name
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
    (void)argc; /* on n'utilise pas argc */
    printf("%s\n", argv[0]);
    return (0);
}
