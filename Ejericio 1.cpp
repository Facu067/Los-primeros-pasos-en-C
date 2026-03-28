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


float Sueldobruto,SueldoBasico,Premio,Comida,Viaticos,Obrasocial,Ley19032,Jubilacion,Descxausencia,Sueldoneto=(5.2);
int Dia,Ausente=0;                                                         //supongo que los ausentes son enteres, no existe medio ausente (llegada tarde)
int Montoxausencia=1500;

//"NOTA MENTAL NO OLVIDAR INICIALIZAR LAS VARIABLES QUE VA INGRESAR EL USUARIO"
// Este modelo toma todas las variables que va inresar el usuria en 1 solo Printf separadas por enters 
// Puede que haya confuciones en los inputs,

printf("Ingrese Nombre y Apellido del empleado el sueldo bruto,los premios, gastos de comida, viaticos y dias de ausente seguidos ENTERS \n",Nombre,Apellido,SueldoBasico,Premio,Comida,Viaticos,Ausente);

scanf("%s %s %f %f %f %f %d",&Nombre,&Apellido,&SueldoBasico,&Premio,&Comida,&Viaticos,&Ausente);

// Genero las variables para las operaciones necesarias

Obrasocial=(SueldoBasico*0.03);
Ley19032=(SueldoBasico*0.03);
Jubilacion=(SueldoBasico*0.11);
Descxausencia=(Ausente*Montoxausencia);

Sueldoneto=(SueldoBasico+Premio+Comida+Viaticos-Obrasocial-Ley19032-Jubilacion-Descxausencia);

// Genero el recibo de sueldo

printf("Su recibo de sueldo neto es:\n %.2f \n Basico %.2f Premios %.2f Comida %.2f Viaticos %.2f Obra Social %.2f Ley 19032 %.2f Jubilacion %.2f Descuento por ausencia %.2f ",Sueldoneto,SueldoBasico,Premio,Comida,Viaticos,Obrasocial,Ley19032,Jubilacion,Descxausencia); //Recibo a mostrar




return 0;

}




