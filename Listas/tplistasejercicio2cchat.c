#include <stdio.h>
#include <stdlib.h>
#include <string.h> 

typedef struct Libro {
    char titulo[30];
    char genero[20];
    char autor[30];
    char tema[30];
    char editorial[30];
} Libro;

typedef struct ListaLibros {
    Libro dato; // Cada nodo contiene un libro
    struct ListaLibros *sig; // Apunta al siguiente nodo
} ListaLibros;

// Inicializar la lista (lista vacía)
ListaLibros *iniciarLista() {
    return NULL;
}

// Función para insertar un libro de forma ordenada en la lista
void insertar(ListaLibros **l, Libro num) {
    ListaLibros *anterior = NULL, *actual = *l, *nuevo;

    // Asigno espacio en memoria para el nuevo nodo
    nuevo = (ListaLibros*)malloc(sizeof(ListaLibros));
    nuevo->dato = num;
    nuevo->sig = NULL;

    // Recorro la lista para encontrar la posición correcta
    while (actual != NULL && strcmp(actual->dato.titulo, num.titulo) < 0) {
        anterior = actual;
        actual = actual->sig;
    }

    nuevo->sig = actual;

    if (anterior == NULL) { // Inserto al inicio
        *l = nuevo;
    } else { // Inserto en medio o al final
        anterior->sig = nuevo;
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

// Función para leer datos de un libro desde teclado
Libro leerLibro() {
    Libro libro;
    printf("Ingrese los datos del libro:\n");

    printf("Título: ");
    fgets(libro.titulo, sizeof(libro.titulo), stdin);
    libro.titulo[strcspn(libro.titulo, "\n")] = '\0';  // Eliminar el salto de línea

    printf("Género: ");
    fgets(libro.genero, sizeof(libro.genero), stdin);
    libro.genero[strcspn(libro.genero, "\n")] = '\0';  // Eliminar el salto de línea

    printf("Autor: ");
    fgets(libro.autor, sizeof(libro.autor), stdin);
    libro.autor[strcspn(libro.autor, "\n")] = '\0';  // Eliminar el salto de línea

    printf("Tema: ");
    fgets(libro.tema, sizeof(libro.tema), stdin);
    libro.tema[strcspn(libro.tema, "\n")] = '\0';  // Eliminar el salto de línea

    printf("Editorial: ");
    fgets(libro.editorial, sizeof(libro.editorial), stdin);
    libro.editorial[strcspn(libro.editorial, "\n")] = '\0';  // Eliminar el salto de línea

    return libro;
}

int main() {
    ListaLibros *lista = iniciarLista(); // Inicializamos la lista vacía
    int cantidadLibros, fabulas, cuentosInfantiles;

    // Pedir la cantidad de libros a ingresar
    printf("Ingrese la cantidad de libros a donar: ");
    scanf("%d", &cantidadLibros);
    getchar();  // Limpiar el buffer de entrada después de leer el número

    // Ingresar los libros uno por uno
    for (int i = 0; i < cantidadLibros; i++) {
        printf("\nLibro %d:\n", i + 1);
        Libro nuevoLibro = leerLibro();
        insertar(&lista, nuevoLibro);
    }

    // Imprimir la lista de libros
    printf("\nLista de libros donados:\n");
    imprimirLista(lista);

    // Contar géneros
    contarGeneros(lista, &fabulas, &cuentosInfantiles);

    // Mostrar los resultados
    printf("\nCantidad de fábulas donadas: %d\n", fabulas);
    printf("Cantidad de cuentos infantiles donados: %d\n", cuentosInfantiles);

    return 0;
}
