int main(int argc, char *argv[])
{
    int sum = 0;
    int i;

    if (argc == 1) /* aucun argument */
    {
        printf("0\n");
        return 0;
    }

    for (i = 1; i < argc; i++)
    {
        if (!is_number(argv[i])) /* si un argument n’est pas un nombre */
        {
            printf("Error\n");
            return 1;
        }
        sum += atoi(argv[i]);
    }

    printf("%d\n", sum);
    return 0;
}

