#include <stdio.h>
#include <stdlib.h>
#include <string.h> 

/*En una escuela primaria se ha pedido a los alumnos que donen un libro para 
armar una biblioteca. Se desea:
a. Incorporar los datos de los libros a una lista, en forma ordenada. La 
información correspondiente a cada libro es: título, género, autor, tema, 
editorial.
b. Informar la cantidad de fábulas y cuentos infantiles donados.*/



/*funciones de la libreria string.... strcpy (copia)*/
/*strcmp =0 cadenas iguales*/
/*>0 cad 1 es mayor*/
/*<0 cad 1 es menor*/

/*int c*/
/*c=0 strcmp (cad1, cad2)*/
/*if strcmp (cad1,cad2)==0*/

typedef struct Libro //libro es el nomnbre del struc 
{
    char titulo [30];
    char genero [20];
    char autor  [30];
    char tema   [30];
    char editorial [30];
}Libro; // Libro aca es el tipo de dato


typedef struct ListaLibros
{
Libro dato;
struct ListaLibros *sig;   /*con esto voy creando los vagones del tren. Creo las listas enlazadas*/


}ListaLibros;

ListaLibros *iniciarLista ();

/*Procedimiento para insertar los libros.*/

void insertar (ListaLibros**l,Libro num) {

ListaLibros *anterior, *actual, *nuevo;

/*asigo espacio en memoria*/

nuevo=(ListaLibros*)malloc (sizeof (ListaLibros));

nuevo->dato=num;

anterior=NULL;
actual=*l;

/* recorrido de la lista*/
while (actual!=NULL&&strcmp(actual->dato.titulo, num.titulo) < 0)
{
    anterior=actual;
    actual=actual->sig;
}

nuevo->sig=actual;


if (anterior==NULL) //La cabeza de lista
{
   (*l=nuevo);
}

else {

    anterior->sig=nuevo;

}

}

// Función para contar fábulas y cuentos infantiles
void contarGeneros(ListaLibros *l, int *fabulas, int *cuentosInfantiles) {
    ListaLibros *aux = l;
    *fabulas = 0;
    *cuentosInfantiles = 0;

    // Recorro la lista y cuento los géneros
    while (aux != NULL) {
        if (strcmp(aux->dato.genero, "Fábula") == 0) {
            (*fabulas)++;
        } else if (strcmp(aux->dato.genero, "Cuento infantil") == 0) {
            (*cuentosInfantiles)++;
        }
        aux = aux->sig;
    }
}


// Función para imprimir la lista de libros
void imprimirLista(ListaLibros *l) {
    ListaLibros *aux = l;
    while (aux != NULL) {
        printf("Título: %s, Género: %s, Autor: %s, Tema: %s, Editorial: %s\n", 
               aux->dato.titulo, aux->dato.genero, aux->dato.autor, aux->dato.tema, aux->dato.editorial);
        aux = aux->sig;
    }
}



//Aca pedimos los datos al usuario por teclado

Libro leerlibro () {

Libro libro;
printf ("Ingresa los datos del libro:\n");

printf ("Titulo: ");
scanf (libro.titulo);

printf ("Genero: ");
scanf (libro.genero);

printf ("Autor: ");
scanf (libro.autor);

printf ("Tema: ");
scanf (libro.tema);

printf ("Editorial: ");
scanf (libro.editorial);


return libro;


}


int main ()
{



ListaLibros *lista=NULL;

insertar(&lista,caperusitaroja);
 printf ("Hola Facu");

return 0;

}


ListaLibros *iniciarLista (){

ListaLibros *Lis=NULL


}




