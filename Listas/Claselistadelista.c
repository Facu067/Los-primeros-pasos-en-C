#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Problema: Una librería ubicada en el centro de la ciudad de La Plata tiene varias sucursales
y en cada una de ellas se conoce la información de los libros disponibles a la venta. De los libros se
conoce: su nombre, código, autor, editorial, precio y stock.
Se desea:
a) Obtener un listado de cada sucursal en donde figure código y editorial de aquellos libros con
stock nulo. */

// Vamos a considerar una lista de sucursales y una lista de libros.

typedef struct r_libro {
    char nombre[20];
    int codigo;
    char editorial[20];
    char autor[20];
    float precio;
    int stock;
} tipo_libro;

typedef struct l_libros {    /* Lista de Libros */
    tipo_libro dato;
    struct l_libros *sig;
} l_libros;

typedef struct l_sucu {       /* Lista de Sucursales */
    char nombre[30];
    l_libros *lista_libros;
    struct l_sucu *sig;       /* puntero a la siguiente sucursal */
} l_sucu;

// Declaración de los prototipos

void insertarSuc (l_sucu **ls, char name[30]); /* Inserta nodo en lista de sucursales */
void insertarLibro (l_libros **l, tipo_libro elem); /* Inserta libro en la lista de libros */
void imprimirLibros (l_libros *l); /* Imprime la lista de libros */

int main() {
    /* Inicialización de la lista de sucursales */
    char nomSuc[30];
    char resp;
    tipo_libro reg;
    l_sucu *lis_suc = NULL;

    printf("\nDesea ingresar datos de una sucursal? s/n: ");
    scanf(" %c", &resp);
    while (resp == 's') {
        printf("Ingrese nombre de la Sucursal: ");
        scanf("%s", nomSuc);
        insertarSuc(&lis_suc, nomSuc);  /* Arma la lista de sucursales */

        // Armo la lista de libros de esa sucursal
        printf("\nIngrese codigo (0 para finalizar): ");
        scanf("%d", &reg.codigo);
        while (reg.codigo != 0) {
            printf("\n Ingrese los datos de un libro ");
            printf("\nNombre: ");
            scanf("%s", reg.nombre);
            printf("Autor: ");
            scanf("%s", reg.autor);
            printf("Precio: ");
            scanf("%f", &reg.precio);
            printf("Editorial: ");
            scanf("%s", reg.editorial);
            printf("Stock: ");
            scanf("%d", &reg.stock);
            insertarLibro(&lis_suc->lista_libros, reg);  /* Agrega libros a la sucursal */

            printf("\nIngrese codigo (0 para finalizar): ");
            scanf("%d", &reg.codigo);
        }
        printf("\nDesea ingresar datos de una nueva sucursal? s/n: ");
        scanf(" %c", &resp);
    }

    /* Imprime la lista de libros sin stock de cada sucursal */
    printf("\n-------- Listado de libros para reponer ----------");
    l_sucu *aux;
    aux = lis_suc;
    while (aux != NULL) {
        printf("\nSucursal: %s", aux->nombre);
        imprimirLibros(aux->lista_libros);
        aux = aux->sig;
    }
    return 0;
}

void insertarSuc(l_sucu **ls, char name[30]) {
    /* Inserta nodo en lista de sucursale*/
    l_sucu *nuevoSuc;
    nuevoSuc = (l_sucu*)malloc(sizeof(l_sucu));
    strcpy(nuevoSuc->nombre, name);
    nuevoSuc->lista_libros = NULL;  /* Faltaba el punto y coma */
    nuevoSuc->sig = *ls;
    *ls = nuevoSuc;
}

void insertarLibro(l_libros **l, tipo_libro elem) {
    l_libros *nuevo;
    nuevo = (l_libros*)malloc(sizeof(l_libros));
    nuevo->dato = elem;
    nuevo->sig = *l;
    *l = nuevo;
}

void imprimirLibros(l_libros *l) {
    l_libros *aux;
    aux = l;
    int cont = 0;

    while (aux != NULL) {
        if (aux->dato.stock == 0) {
            printf("\nEditorial: %s, Código: %d", aux->dato.editorial, aux->dato.codigo);
            cont++;
        }
        aux = aux->sig;
    }

    if (cont == 0) {
        printf("\nNo hay libros para reponer.");
    }
}

