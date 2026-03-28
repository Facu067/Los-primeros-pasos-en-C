#include <stdio.h>

// Declaraci�n de las constantes
#define cantTalleres 5 // Cantidad de talleres
#define capacLocal1 10 // Capacidad del local 1
#define capacLocal2 5  // Capacidad del local 2
#define capacLocal3 8  // Capacidad del local 3
#define capacLocal4 12 // Capacidad del local 4
#define capacLocal5 10 // Capacidad del local 5
#define costoInscripcion 100 // Costo de la inscripci�n

// Funci�n que calcula el descuento seg�n la edad
float calcularDescuento(int edad) {
    if (edad < 25) {
        return 0.25; // 25% de descuento
    } else {
        return 0.0; // Sin descuento
    }
}

float porcentaje (int inscriptos , int experiencia ) {
    if (experiencia == 0) {
        printf("Error: El valor total no puede ser 0.\n");
        return 0.0; // Retorna 0.0 en caso de que el total sea 0 para evitar divisi�n por cero.
    }
    return ( inscriptos / experiencia)*100;
}
    
    
// Funci�n para inscribir en un taller espec�fico
void inscribirTaller(int capacidad, int* totalTaller, int* totalMayores, int* participoAntes, int* sumaEdades) {
    int edad = 0;
    int hayInscripto = 0;
    int realizoCursoPrevio = 0;
    float descuento = 0.0;
    for (int j = 1; j <= capacidad; j++) {
        printf("Ingrese '1' si hay inscriptos o '0' para salir al men� principal\n");
        scanf("%d", &hayInscripto);
        if (hayInscripto == 0) {
            break; // Salir del bucle de inscripci�n y volver al men� principal
        }
        if (hayInscripto == 1) {
            (*totalTaller)++;
            printf("Ingrese '1' si el inscripto realiz� un curso previo\n");
            scanf("%d", &realizoCursoPrevio);
            if (realizoCursoPrevio == 1) {
                (*participoAntes)++;
            }
            printf("Ingrese la edad del inscripto\n");
            scanf("%d", &edad);
            (*sumaEdades) += edad;
            if (edad >= 40) {
                (*totalMayores)++;
            }
            if (edad < 25) {
                descuento = calcularDescuento(edad);
                printf("Tienes un descuento del 25%%, abonas $75 de inscripci�n\n");
            } else {
                printf("No tienes descuento, abonas $100 de inscripci�n\n");
            }
        } else {
            printf("No hay inscriptos en el taller\n");
        }
        if (*totalTaller > capacidad) {
            printf("La cantidad de inscriptos super� la capacidad del local\n");
        } else {
            printf("A�n quedan cupos disponibles para inscripci�n\n");
        }
    }
}

int main() {
    // Declaraci�n de variables para guardar datos de inscripci�n
    int totalTaller1, totalTaller2, totalTaller3, totalTaller4, totalTaller5;
    int totalMayores = 0; // Cantidad total de inscriptos mayores de 40 a�os
    int sumaEdades = 0; // Sumatoria de edades para calcular el promedio
    float promedioEdades = 0.0; // Promedio de edades de las personas en todos los talleres
    int participoAntes1, participoAntes2, participoAntes3, participoAntes4, participoAntes5 = 0; // Cantidad de inscriptos que han hecho un curso previo
    int supCapacidad = 0; // Cantidad de locales que supera la capacidad m�xima
    int taller = 0; // N�mero de taller seleccionado
    int opcion = 0; // Opci�n del men� principal

    do {
        printf("INSCRIPCIONES A LOS NUEVOS TALLERES DE COCINA\n");
        printf("1. Inscribir en taller 1\n");
        printf("2. Inscribir en taller 2\n");
        printf("3. Inscribir en taller 3\n");
        printf("4. Inscribir en taller 4\n");
        printf("5. Inscribir en taller 5\n");
        printf("6. Mostrar resumen y salir\n");
        printf("Seleccione una opci�n: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                printf("************ INSCRIPCI�N AL TALLER 1 ************\n\n");
                printf("La capacidad del local n�1 es %d\n", capacLocal1);
                inscribirTaller(capacLocal1, &totalTaller1, &totalMayores, &participoAntes1, &sumaEdades);
                
                float porcentaje (participoAntes1,totalTaller1);
                break;
            case 2:
                printf("************ INSCRIPCI�N AL TALLER 2 ************\n\n");
                printf("La capacidad del local n�2 es %d\n", capacLocal2);
                inscribirTaller(capacLocal2, &totalTaller2, &totalMayores, &participoAntes2, &sumaEdades);
                float porcentaje (participoAntes2,totalTaller2);
                break;
            case 3:
                printf("************ INSCRIPCI�N AL TALLER 3 ************\n\n");
                printf("La capacidad del local n�3 es %d\n", capacLocal3);
                inscribirTaller(capacLocal3, &totalTaller3, &totalMayores, &participoAntes3, &sumaEdades);
                float porcentaje(participoAntes3,totalTaller3);
                break;
            case 4:
                printf("************ INSCRIPCI�N AL TALLER 4 ************\n\n");
                printf("La capacidad del local n�4 es %d\n", capacLocal4);
                inscribirTaller(capacLocal4, &totalTaller4, &totalMayores, &participoAntes4, &sumaEdades);
                float porcentaje(participoAntes4,totalTaller4);
                break;
            case 5:
                printf("************ INSCRIPCI�N AL TALLER 5 ************\n\n");
                printf("La capacidad del local n�5 es %d\n", capacLocal5);
                inscribirTaller(capacLocal5, &totalTaller5, &totalMayores, &participoAntes5, &sumaEdades);
                float porcentaje(participoAntes5,totalTaller5);
                break;
            case 6:
                // Calcular el promedio de edades
                if (totalTaller1 + totalTaller2 + totalTaller3 + totalTaller4 + totalTaller5 > 0) {
                    promedioEdades = (float)sumaEdades / (totalTaller1 + totalTaller2 + totalTaller3 + totalTaller4 + totalTaller5);
                    float porcentaje(participoAntes5,totalTaller1);
                } else {
                    promedioEdades = 0.0;
                }

                // Mostrar resultados
                printf("\nResumen de inscripciones:\n");
                printf("Total inscriptos en el taller 1: %d\n", totalTaller1);
                printf("Total inscriptos en el taller 2: %d\n", totalTaller2);
                printf("Total inscriptos en el taller 3: %d\n", totalTaller3);
                printf("Total inscriptos en el taller 4: %d\n", totalTaller4);
                printf("Total inscriptos en el taller 5: %d\n", totalTaller5);
                printf("Total inscriptos mayores de 40 a�os: %d\n", totalMayores);
                printf("Cantidad de inscriptos que han realizado un curso previo: %d\n", participoAntes);
                printf("Cantidad de locales que superaron la capacidad m�xima: %d\n", supCapacidad);
                printf("Promedio de edades de los inscriptos: %.2f\n", promedioEdades);
                break;
            default:
                printf("Opci�n no v�lida. Intente de nuevo.\n");
                break;
        }
    } while (opcion != 6);

    return 0;
}

