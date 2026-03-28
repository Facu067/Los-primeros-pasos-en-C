#include <stdio.h> 
#include <stdlib.h>

typedef struct ListasOrdenadas {
    int dato;
    struct ListasOrdenadas *sig;
} ListasOrdenadas;

// Función para insertar en una lista ordenada
void insertar_2(ListasOrdenadas **l, int num) {
    ListasOrdenadas *anterior, *actual, *nuevo;
    nuevo = (ListasOrdenadas*)malloc(sizeof(ListasOrdenadas));
    nuevo->dato = num; // Asignamos el dato
    nuevo->sig = NULL; // Inicializamos el siguiente a NULL

    anterior = NULL;
    actual = *l;

    // Recorremos la lista hasta encontrar la posición correcta
    while (actual != NULL && actual->dato < num) {
        anterior = actual;
        actual = actual->sig;
    }

    nuevo->sig = actual;

    if (anterior == NULL) {  // Insertar al inicio
        *l = nuevo;
    } else {
        anterior->sig = nuevo;
    }
}

int main() {
    int i = 0;   // Variable contador
    int a;       // Variable para buscar el número
    ListasOrdenadas *lista = NULL; // Este es el puntero inicial

    // Insertamos algunos números
    insertar_2(&lista, 3);
    insertar_2(&lista, 6);
    insertar_2(&lista, 8);

    ListasOrdenadas *actual = lista;

    // Pedimos al usuario que ingrese el número a buscar
    printf("Por favor, ingrese el número que desea buscar en la lista: ");
    scanf("%d", &a);  // Debes pasar la dirección de a con &

    // Buscamos el número en la lista
    while (actual != NULL) {
        if (actual->dato == a) {
            i++;
        }
        actual = actual->sig;
    }

    // Mostramos el resultado de la búsqueda
    if (i == 0) {
        printf("No existe ese número en la lista.\n");
    } else if (i == 1) {
        printf("Número encontrado en la lista.\n");
    }

    // Mostramos toda la lista
    actual = lista;
    printf("Lista completa: ");
    while (actual != NULL) {
        printf("%d -> ", actual->dato);
        actual = actual->sig;
    }
    printf("NULL\n");

    return 0;
}
