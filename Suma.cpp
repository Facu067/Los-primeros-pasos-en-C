//Cosigna: Obtener la suma de dos números enteros dados


//Invoco librerias

#include <stdio.h> 

//Inicializo Variables

int A,B,suma;

//Comienza el Programa
 int main () {



printf("A continucacion se sumaran 2 numeros enteros, se le pedira que ingrese esos numeros \n" "Ingrese num1\n",A);
scanf("%d",&A);

printf("Ingrese el num2\n",B);
scanf("%d",&B);

//Creo el operedor matematico que necesito

suma=(A+B);

printf("El resultado es: %d",suma);

return 0;



}
