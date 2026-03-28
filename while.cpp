#include <stdio.h> 



int main() {
    int option = 1;  // Cambia este valor para probar diferentes casos

    switch(option) {
        case 1: {
            printf("Inicio del case 1\n");

            // Etiqueta para regresar aquí
            inicio_case_1:
            printf("Dentro del case 1\n");

            int counter = 0;
            int userChoice;
            while (counter < 3) {
                printf("Dentro del while, iteración %d\n", counter);
                counter++;

                // Simulamos una elección del usuario
                printf("Elija 1 para regresar al inicio del case 1, cualquier otro número para continuar: ");
                scanf("%d", &userChoice);

                if (userChoice == 1) {
                    printf("Regresando al inicio del case 1\n");
                    goto inicio_case_1;  // Regresa a la etiqueta
                }
            }

            printf("Final del case 1\n");
            break;
        }

        case 2: {
            printf("Inicio del case 2\n");

            // Etiqueta para regresar aquí
            inicio_case_2:
            printf("Dentro del case 2\n");

            int counter = 0;
            int userChoice;
            while (counter < 3) {
                printf("Dentro del while, iteración %d\n", counter);
                counter++;

                // Simulamos una elección del usuario
                printf("Elija 1 para regresar al inicio del case 2, cualquier otro número para continuar: ");
                scanf("%d", &userChoice);

                if (userChoice == 1) {
                    printf("Regresando al inicio del case 2\n");
                    goto inicio_case_2;  // Regresa a la etiqueta
                }
            }

            printf("Final del case 2\n");
            break;
        }

        // Agrega casos adicionales según sea necesario

        default:
            printf("case default\n");
            break;
    }

    return 0;
}


#include <stdio.h>

int main() {
    int option;

    // Etiqueta para la elección del case
    elegir_case:
    printf("Elija una opción (1-5): ");
    scanf("%d", &option);

    switch(option) {
        case 1: {
            printf("Inicio del case 1\n");

            // Etiqueta para regresar aquí dentro del case 1
            inicio_case_1:
            printf("Dentro del case 1\n");

            int counter = 0;
            int userChoice;
            while (counter < 3) {
                printf("Dentro del while, iteración %d\n", counter);
                counter++;

                // Simulamos una elección del usuario
                printf("Elija 1 para regresar al inicio del case 1, 2 para regresar a la elección del case, cualquier otro número para continuar: ");
                scanf("%d", &userChoice);

                if (userChoice == 1) {
                    printf("Regresando al inicio del case 1\n");
                    goto inicio_case_1;  // Regresa a la etiqueta dentro del case
                } else if (userChoice == 2) {
                    printf("Regresando a la elección del case\n");
                    goto elegir_case;  // Regresa a la etiqueta de elección del case
                }
            }

            printf("Final del case 1\n");
            break;
        }

        case 2: {
            printf("Inicio del case 2\n");

            // Etiqueta para regresar aquí dentro del case 2
            inicio_case_2:
            printf("Dentro del case 2\n");

            int counter = 0;
            int userChoice;
            while (counter < 3) {
                printf("Dentro del while, iteración %d\n", counter);
                counter++;

                // Simulamos una elección del usuario
                printf("Elija 1 para regresar al inicio del case 2, 2 para regresar a la elección del case, cualquier otro número para continuar: ");
                scanf("%d", &userChoice);

                if (userChoice == 1) {
                    printf("Regresando al inicio del case 2\n");
                    goto inicio_case_2;  // Regresa a la etiqueta dentro del case
                } else if (userChoice == 2) {
                    printf("Regresando a la elección del case\n");
                    goto elegir_case;  // Regresa a la etiqueta de elección del case
                }
            }

            printf("Final del case 2\n");
            break;
        }

        // Agrega casos adicionales según sea necesario

        default:
            printf("Opción inválida, elija nuevamente.\n");
            goto elegir_case;  // Regresa a la etiqueta de elección del case
    }

    return 0;
}
