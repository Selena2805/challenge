#include <stdio.h>
#include <stdlib.h>

const p=3.14;

int main()
{
    float r,c;


    printf("entrer lerayon de cercle\n");
    scanf("%f",&r);

    c= 2*p*r ;

    printf("le c de cercle est %.2f\n",c);

    return 0;
}
