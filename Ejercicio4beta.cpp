#include <stdio.h>

int main(){
    int totalper, m1, m2, m3, m4, m5, m6, m7;

    printf("Favor de ingresar la cantidad de pernsonas encuestadas: \n");
    scanf("%d",&totalper);

    printf("Favor de ingrese la cantidad personas que eligieron la Marca 1: \n");
    scanf("%d",&m1);


printf("Favor de ingrese la cantidad personas que eligieron la Marca 2; \n");
scanf("%d",&m2);


printf("Favor de ingrese la cantidad personas que eligieron la Marca 3; \n");
scanf("%d",&m3);


printf("Favor de ingrese la cantidad personas que eligieron la Marca 4; \n");
scanf("%d",&m4);


printf("Favor de ingrese la cantidad personas que eligieron la Marca 5\n");
scanf("%d",&m5);


printf("Favor de ingrese la cantidad personas que eligieron la Marca 6; \n");
scanf("%d",&m6);


printf("Favor de ingrese la cantidad personas que eligieron la Marca 7; \n");
scanf("%d",&m7);

float porc1 = (int) m1 * 100/ totalper;
float porc2 = (int) m2 * 100 / totalper;
float porc3 = (int) m3 * 100 / totalper;
float porc4 = (int) m4 * 100 / totalper;
float porc5 = (int) m5 * 100 / totalper;
float porc6 = (int) m6 * 100 / totalper;
float porc7 = (int) m7 * 100 / totalper;

printf("Los porcentajes son\n m1: %.2f\nm2: %.2f\nm3: %2.f\nm4: %.2f\nm5: %.2f\nm6: %.2f\nm7: %.2f", porc1, porc2, porc3, porc4, porc5, porc6,porc7);



}