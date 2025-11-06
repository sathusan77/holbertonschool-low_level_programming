int is_number(char *s)
{
    int i = 0;

    if (!s || s[0] == '\0') /* chaîne vide = non nombre */
        return 0;

    while (s[i])
    {
        if (!isdigit(s[i]))
            return 0;
        i++;
    }
    return 1;
}

