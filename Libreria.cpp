
//Programa Libreria

// invoco a las librerias

#include <stdio.h> 



 // Declaro las variables a utilizar                                
     int MinUso,CantHojas,ImportTotalHojas,ImportSubTotalMin,ImportTotalMin;                 
     float ImportCargaAdic,TotalaPagar;
     int ImpHoja=15;
     int ImpMin=10;

// Inicia el programa
 int main () {               

      printf("Ingrese los minutos de uso\n",MinUso);
      scanf("%d",&MinUso);
     
      printf("Ingrese los cantidad de hojas\n",CantHojas);  
      
      scanf("%d",&CantHojas);

// Genero las variables para las operaciones necesarias
     ImportTotalMin=(MinUso*ImpMin);
     ImportCargaAdic=(MinUso*(5*0.01));
     ImportTotalHojas=(CantHojas*ImpHoja);                                    
     TotalaPagar=(ImportTotalMin+ImportCargaAdic+ImportTotalHojas);


  printf("Los minutos de uso son %d y la catidad de hojas son %d \n El importe por el cargo adiciones es: %.2f y su importe Total es: %.2f" ,MinUso,CantHojas,ImportCargaAdic,TotalaPagar);
  

return 0;


}                                          

  














  

