#include <stdio.h>
#include "dog.h"   /* inclure dog.h pour init_dog et print_dog */

int main(void)
{
    struct dog my_dog;

    my_dog.name = "Poppy";
    my_dog.age = 3.5;
    my_dog.owner = "Bob";

    print_dog(&my_dog); /* maintenant le compilateur connaît la fonction */
    return (0);
}

