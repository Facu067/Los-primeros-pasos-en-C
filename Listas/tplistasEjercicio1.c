#include <stdio.h>



typedef struct Lista 
{
    int dato;
    struct Lista *siguiente;

    
}Lista;


Lista *iniciarLista();
Lista *insertarElmentoOrdenado(Lista *lis,int elem);


int a;
a=teclado

int main ()

{

Lista *L;
L=*iniciarLista();

printf("Hello Word!"\n);

return 0;



}


Lista *iniciarLista () {
Lista *lis=NULL


}


/*para imprimir la lista ordenada de menor a mayor*/

void ImprimirLista (Lista*lis){
Lista *aux;
aux=lis
int i=0
while (aux!=NULL)
{
    printf ("%d\n",aux->dato);
    i++;
    aux=aux->siguiente;
}
printf ("La lista tiene %d elementos\n",i);


}