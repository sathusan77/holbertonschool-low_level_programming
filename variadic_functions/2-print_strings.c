#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Imprime des chaînes de caractères séparées par un séparateur
 * @separator: Chaîne entre les mots (peut être NULL)
 * @n: Nombre de chaînes à afficher
 * @...: Nombre variable de chaînes
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
    va_list args;            // 1. Déclare la liste d'arguments variables
    unsigned int i;          // 2. Compteur de boucle
    char *str;               // 3. Pour récupérer chaque chaîne

    va_start(args, n);       // 4. Initialise args pour récupérer les arguments après 'n'

    for (i = 0; i < n; i++)  // 5. Parcours tous les arguments
    {
        str = va_arg(args, char *);  // 6. Récupère le i-ème argument

        if (str == NULL)             // 7. Vérifie si la chaîne est NULL
            printf("(nil)");
        else
            printf("%s", str);

        // 8. Affiche le séparateur seulement si ce n'est pas le dernier mot
        if (separator != NULL && i < n - 1)
            printf("%s", separator);
    }

    printf("\n");           // 9. Nouvelle ligne à la fin
    va_end(args);           // 10. Libère la mémoire de la liste d'arguments
}

