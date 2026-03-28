//Una empresa desea calcular el sueldo de un empleado e imprimir su recibo detallando:
//⮚ Nombre y Apellido, Sueldo Básico, Premio, Comida, Viáticos, Ausentes, Obra
//social (3%),
//⮚ Ley 19032 (3%), y Jubilación (11%).
//⮚ Por los ausentes, se descuenta un monto fijo por día de ausencia. Los
//porcentajes se calculan sobre los montos remunerativos. Viáticos, premios y
//comida no se consideran remunerativos.


// Agrego librerias a usar

#include <stdio.h>

//Inicializo Variables a utilizar (globales)

char Nombre[20];
char Apellido[20];


//Comienza el programa

int main () { 

// Declaro Variables Locales

float SueldoBasico,Premio,Comida,Viaticos,Obrasocial,Ley19032,Jubilacion,Descxausencia,Sueldoneto=(5.2);
int Ausente=0;                                                         //supongo que los ausentes son enteres, no existe medio ausente (llegada tarde)
int Montoxausencia=1500;

// Este modelo devuelve un printf por cada variable que se le pide al usuario ingresar puede que sea algo redundante, pero se ayuda a evitar conficiones
//"NOTA MENTAL NO OLVIDAR INICIALIZAR LAS VARIABLES QUE VA INGRESAR EL USUARIO"
    
    printf("Ingrese Nombre del empleado \n",Nombre);
    scanf("%s",&Nombre); 
    printf("El Nombre que ingreso es %s \n ",Nombre);
    
    printf("Ingrese Apellido del empleado \n",Apellido);
    scanf("%s",&Apellido);    
    printf("El Apellido ingresado es  %s\n",Apellido);
    
    printf("Ingrese sueldo basico del empleado \n",SueldoBasico);
    scanf("%f",&SueldoBasico);
    printf("El sueldo es: %2.f\n",SueldoBasico);

    printf("Ingrese los Premios del mes del empleado \n",Premio);
    scanf("%f",&Premio);
    printf("Los premios fueron de %.2f \n",Premio);
   
    printf("Ingrese el dinero entregado para la comida \n",Comida);
    scanf("%f",&Comida);
    printf("Ingrese el dinero entregado para la comida %.2f\n ",Comida);

    printf("Ingrese los viaticos de este mes del empleado \n",Viaticos);
    scanf("%f",&Viaticos);
    printf("Los viaticos ingresados fueron de %.2f \n",Viaticos);
   
    printf("Ingrese la cantidad de dias de ausente que tuvo el empleado \n",Ausente);
    scanf("%d",&Ausente);
    printf("Los días asuentes fueron %d\n",Ausente);


// Genero las variables para las operaciones necesarias


Obrasocial=(SueldoBasico*0.03);
Ley19032=(SueldoBasico*0.03);
Jubilacion=(SueldoBasico*0.11);
Descxausencia=(Ausente*Montoxausencia);

Sueldoneto=(SueldoBasico+Premio+Comida+Viaticos-Obrasocial-Ley19032-Jubilacion-Descxausencia);

// Genero el recibo de sueldo

printf("Recibo de sueldo \n Su Saladio neto es:\n %.2f \n Basico %.2f Premios %.2f Comida %.2f Viaticos %.2f Obra Social %.2f Ley 19032 %.2f Jubilacion %.2f Descuento por ausencia %.2f ",Sueldoneto,SueldoBasico,Premio,Comida,Viaticos,Obrasocial,Ley19032,Jubilacion,Descxausencia); //Recibo a mostrar

return 0;




}

