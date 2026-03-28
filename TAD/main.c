#include <stdio.h>
#include <stdlib.h>
#include "TADnumerocomplejo.h.c"

int main()
{
    int N,a,b;
    Complejo z,suma;
    suma = crear(0,0); //inicializo el complejo suma en (0,0)
    printf("\n Ingrese la cantidad de n�meros complejos a sumar: ");
    scanf("%d",&N);
    for(int i=0; i<N;i++){
        printf("Ingrese la componente real:");
        scanf("%d",&a);
        printf("Ingrese la componente imaginaria:");
        scanf("%d",&b);
        z=crear(a,b);
        suma = sumar(suma,z); // Acumulador
    }
    printf("\nLa componente real de la suma es: %d",parteReal(suma));
    printf("\nLa componente imaginaria de la suma es: %d",imag(suma));

    return 0;
}
