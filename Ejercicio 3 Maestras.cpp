/*En una escuela primaria se solicita a los 30 alumnos del sexto curso que califiquen a
sus 3 maestras. Para hacerlo, deben agruparse de a 5 y cada grupo asignar una nota
entre 1 y 10 a cada maestra. Se requiere un informe en el que se detalle, para cada
maestra, la nota que cada grupo le asignó y la nota promedio que obtuvo.*/

//Cargo las librerias
 
#include <stdio.h>

//Declaro variables globales







int notag1m1,notag1m2,notag1m3,notag2m1,notag2m2,notag2m3,notag3m1,notag3m2,notag3m3,notag4m1,notag4m2,notag4m3,notag5m1,notag5m2,notag5m3,notag6m1,notag6m2,notag6m3;


float promediom1,promediom2,promediom3;

int main () {


/*supongo que los 30 alumnos ya tienen sus grupos asigados y van a ir en orden de menor a mayor asigando las notas cada maestra*/




//Notas Maestra 1

 
    printf("Hola Grupo 1  ingrese la nota de la maestra 1 (entre 1 y 10) \n",notag1m1);
    scanf("%d",&notag1m1); 
    
    printf("Hola Grupo 2 ingrese la nota de la maestra 1 (entre 1 y 10) \n",notag2m1); 
    scanf("%d",&notag2m1);

    printf("Hola Grupo 3 ingrese la nota de la maestra 1 (entre 1 y 10) \n",notag3m1);
    scanf("%d",&notag3m1);

    printf("Hola Grupo 4 ingrese la nota de la maestra 1 (entre 1 y 10) \n",notag4m1);
    scanf("%d",&notag4m1);

    printf("Hola Grupo 5 ingrese la nota de la maestra 1 (entre 1 y 10) \n",notag5m1);
    scanf("%d",&notag5m1);

    printf("Hola Grupo 6 ingrese la nota de la maestra 1 (entre 1 y 10) \n",notag6m1);
    scanf("%d",&notag6m1);
     
 //Notas  Maestra 2                            
                             
    printf("Hola Grupo 1 ingresa ingrese la nota de la maestra 2 (entre 1 y 10) \n",notag1m2);
    scanf("%d",&notag1m2); 

    printf("Hola Grupo 2 ingresa ingrese la nota de la maestra 2 (entre 1 y 10) \n",notag2m2);
    scanf("%d",&notag2m2); 

    printf("Hola Grupo 3 ingresa ingrese la nota de la maestra 2 (entre 1 y 10) \n",notag3m2);
    scanf("%d",&notag3m2); 

    printf("Hola Grupo 4 ingresa ingrese la nota de la maestra 2 (entre 1 y 10) \n",notag4m2);
    scanf("%d",&notag4m2); 

    printf("Hola Grupo 5 ingresa ingrese la nota de la maestra 2 (entre 1 y 10) \n",notag5m2);
    scanf("%d",&notag5m2); 

    printf("Hola Grupo 6 ingresa ingrese la nota de la maestra 2 (entre 1 y 10) \n",notag6m2);
    scanf("%d",&notag6m2);                        
                             
 //Notas  Maestra 3                            
                             
   printf("Hola Grupo 1 ingresa ingrese la nota de la maestra 3 (entre 1 y 10) \n",notag1m3);
   scanf("%d",&notag1m3);     

    printf("Hola Grupo 2 ingresa ingrese la nota de la maestra 3 (entre 1 y 10) \n",notag2m3);
    scanf("%d",&notag2m3);

    printf("Hola Grupo 3 ingresa ingrese la nota de la maestra 3 (entre 1 y 10) \n",notag3m3);
    scanf("%d",&notag3m3);

    printf("Hola Grupo 4 ingresa ingrese la nota de la maestra 3 (entre 1 y 10) \n",notag4m3);
    scanf("%d",&notag4m3);

    printf("Hola Grupo 5 ingresa ingrese la nota de la maestra 3 (entre 1 y 10) \n",notag5m3);
    scanf("%d",&notag5m3);

    printf("Hola Grupo 6 ingresa ingrese la nota de la maestra 3 (entre 1 y 10) \n",notag6m3);
    scanf("%d",&notag6m3);
                          

//Delcaro las variables locales e inicializo

promediom1=(notag1m1+notag2m1+notag3m1+notag4m1+notag5m1+notag6m1/6);

promediom2=(notag1m2+notag2m2+notag3m2+notag4m2+notag5m2+notag6m2/6);

promediom3=(notag1m3+notag2m3+notag4m3+notag5m3+notag6m3/6);

printf("La nota promedio de la Maestra 1 es:\n %.2f \n La nota promedio de la Maestra 2 es: \n %.2f \n La nota promedio de la Maestra 3 es:\n %.2f ",promediom1,promediom2,promediom3);

return 0;

}

