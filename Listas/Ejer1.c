#include <stdio.h> 
#include <stdlib.h>



typedef struct ListasOrdenadas
{

    int dato;
    struct ListasOrdenadas *sig;
    
}ListasOrdenadas;



/* vamos usar la lista con procemiento*/


void insertar_2 (ListasOrdenadas **l, int num  ) {
 
ListasOrdenadas *anterior, *actual, *nuevo;

nuevo=(ListasOrdenadas*)malloc(sizeof(ListasOrdenadas));

nuevo->dato=num; //apunta a A

anterior=NULL;
actual=*l;


while (actual!=NULL&&actual->dato<num)
{
    anterior=actual;
    actual=actual->sig;    
}

nuevo->sig=actual;

if(anterior==NULL) // la cabeza de la lista 
{
    (*l=nuevo);

}
else {

anterior->sig=nuevo;

}
}


int a;






i=0;
/* creamos el main */

int main () {



ListasOrdenadas *lista=NULL; // Este es el puntero inicial

insertar_2(&lista,3);
insertar_2(&lista,6);
insertar_2(&lista,8);

ListasOrdenadas *actual=lista;



printf ("Por favor Ingrese el Num que desea buscar en la lista %d",a); // falta seguir  poner scanf
scanf ("%d",a);


while (actual!=NULL)
{
    if (actual->dato=a)
  
     i++;
     (actual->sig);
 
}

switch (estadosdei) {
case 1:
    if (i=0)
    {
    printf ("No existe ese num en la lista");
        }
    
    
    break;
 

case 2:
 if (i=1)
 {
    while (actual->dato!=a)
    {
        actual->sig

        anterior->sig=actual->sig
    }
    
 }
 
 

default:
    break;
}



while (actual != NULL)
{
    printf("%d ->", actual->dato);
    actual=actual->sig;
}
//printf("NULL\n");

return 0;




}