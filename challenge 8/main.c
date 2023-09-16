#include <stdio.h>
#include <stdlib.h>

int main()
{ int nombre;

    printf("Entrez un nombre entier : ");
    scanf("%d", &nombre);

    printf("La valeur équivalente en octal est : %o\n", nombre);
    printf("La valeur équivalente en hexadécimal est : %x\n", nombre);


    return 0;
}
