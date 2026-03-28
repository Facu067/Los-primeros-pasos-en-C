#include <stdio.h>

// Declaración de las constantes
#define cantTalleres 5 // Cantidad de talleres
#define capacLocal1 10 // Capacidad del local 1
#define capacLocal2 5  // Capacidad del local 2
#define capacLocal3 8  // Capacidad del local 3
#define capacLocal4 12 // Capacidad del local 4
#define capacLocal5 10 // Capacidad del local 5
#define costoInscripcion 100 // Costo de la inscripción

// Función que calcula el descuento según la edad
float calcularDescuento(int edad) {
    if (edad < 25) {
        return 0.25; // 25% de descuento
    } else {
        return 0.0; // Sin descuento
    }
}
// Función para calcular el porcentaje
float porcentaje(int inscriptos, int experiencia) {
    if (experiencia == 0) {
        printf("Error: El valor total no puede ser 0.\n");
        return 0.0; // Retorna 0.0 en caso de que el total sea 0 para evitar división por cero.
    }
    return ((float)inscriptos / experiencia) * 100;
}    

// Función para inscribir en un taller específico
void inscribirTaller(int capacidad, int* totalTaller, int* totalMayores, int* participoAntes, int* sumaEdades, int* descuentosTaller) {
    int edad = 0;
    int hayInscripto = 0;
    int realizoCursoPrevio = 0;
    float descuento = 0.0;
    for (int j = 1; j <= capacidad; j++) {
        printf("Ingrese '1' si hay inscriptos o '0' para salir al menú principal\n");
        scanf("%d", &hayInscripto);
        if (hayInscripto == 0) {
            break; // Salir del bucle de inscripción y volver al menú principal
        }
        if (hayInscripto == 1) {
            (*totalTaller)++;
            printf("Ingrese '1' si el inscripto realizó un curso previo, caso contrario ingrese '0'\n");
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
            descuento = calcularDescuento(edad);
            if (descuento > 0) {
                (*descuentosTaller)++;
                printf("Tienes un descuento del 25%%, abonas $75 de inscripción\n");
            } else {
                printf("No tienes descuento, abonas $100 de inscripción\n");
            }
        } else {
            printf("No hay inscriptos en el taller\n");
        }
        if (*totalTaller > capacidad) {
            printf("La cantidad de inscriptos superó la capacidad del local\n");
        } else {
            printf("Aún quedan cupos disponibles para inscripción\n");
        }
    }
}

int main() {
    // Declaración de variables para guardar datos de inscripción
    int totalTaller1 = 0, totalTaller2 = 0, totalTaller3 = 0, totalTaller4 = 0, totalTaller5 = 0;
    int totalMayores = 0; // Cantidad total de inscriptos mayores de 40 años
    int sumaEdades = 0; // Sumatoria de edades para calcular el promedio
    float promedioEdades = 0.0; // Promedio de edades de las personas en todos los talleres
    int participoAntes1 = 0, participoAntes2 = 0, participoAntes3 = 0, participoAntes4 = 0, participoAntes5 = 0; // Cantidad de inscriptos que han hecho un curso previo
    int supCapacidad = 0; // Cantidad de locales que supera la capacidad máxima
    int opcion = 0; // Opción del menu principal
    int descuentosTaller1 = 0, descuentosTaller2 = 0, descuentosTaller3 = 0, descuentosTaller4 = 0, descuentosTaller5 = 0;

    do {
        printf("INSCRIPCIONES A LOS NUEVOS TALLERES DE COCINA\n");
        printf("1. Inscribir en taller 1\n");
        printf("2. Inscribir en taller 2\n");
        printf("3. Inscribir en taller 3\n");
        printf("4. Inscribir en taller 4\n");
        printf("5. Inscribir en taller 5\n");
        printf("6. Mostrar resumen y salir\n");
        printf("Seleccione una opción: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                printf("************ INSCRIPCIÓN AL TALLER 1 ************\n\n");
                printf("La capacidad del local n°1 es %d\n", capacLocal1);
                inscribirTaller(capacLocal1, &totalTaller1, &totalMayores, &participoAntes1, &sumaEdades, &descuentosTaller1);
                break;
            case 2:
                printf("************ INSCRIPCIÓN AL TALLER 2 ************\n\n");
                printf("La capacidad del local n°2 es %d\n", capacLocal2);
                inscribirTaller(capacLocal2, &totalTaller2, &totalMayores, &participoAntes2, &sumaEdades, &descuentosTaller2);
                break;
            case 3:
                printf("************ INSCRIPCIÓN AL TALLER 3 ************\n\n");
                printf("La capacidad del local n°3 es %d\n", capacLocal3);
                inscribirTaller(capacLocal3, &totalTaller3, &totalMayores, &participoAntes3, &sumaEdades, &descuentosTaller3);
                break;
            case 4:
                printf("************ INSCRIPCIÓN AL TALLER 4 ************\n\n");
                printf("La capacidad del local n°4 es %d\n", capacLocal4);
                inscribirTaller(capacLocal4, &totalTaller4, &totalMayores, &participoAntes4, &sumaEdades, &descuentosTaller4);
                break;
            case 5:
                printf("************ INSCRIPCIÓN AL TALLER 5 ************\n\n");
                printf("La capacidad del local n°5 es %d\n", capacLocal5);
                inscribirTaller(capacLocal5, &totalTaller5, &totalMayores, &participoAntes5, &sumaEdades, &descuentosTaller5);
                break;
            case 6:
                // Calcular el promedio de edades
                if (totalTaller1 + totalTaller2 + totalTaller3 + totalTaller4 + totalTaller5 > 0) {
                    promedioEdades = (float)sumaEdades / (totalTaller1 + totalTaller2 + totalTaller3 + totalTaller4 + totalTaller5);
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
                printf("Total inscriptos mayores de 40 años: %d\n", totalMayores);
                printf("Cantidad de inscriptos que han realizado un curso previo: %d\n", participoAntes1 + participoAntes2 + participoAntes3 + participoAntes4 + participoAntes5);
                printf("Cantidad de locales que superaron la capacidad máxima: %d\n", supCapacidad);
                printf("Promedio de edades de los inscriptos: %.2f\n", promedioEdades);

                // Determinar el taller con más descuentos
                int maxDescuentos = descuentosTaller1;
                int tallerMaxDescuentos = 1;

                if (descuentosTaller2 > maxDescuentos) {
                    maxDescuentos = descuentosTaller2;
                    tallerMaxDescuentos = 2;
                }
                if (descuentosTaller3 > maxDescuentos) {
                    maxDescuentos = descuentosTaller3;
                    tallerMaxDescuentos = 3;
                }
                if (descuentosTaller4 > maxDescuentos) {
                    maxDescuentos = descuentosTaller4;
                    tallerMaxDescuentos = 4;
                }
                if (descuentosTaller5 > maxDescuentos) {
                    maxDescuentos = descuentosTaller5;
                    tallerMaxDescuentos = 5;
                }

                // Capacidades de talleres superadas
                if (totalTaller1 > capacLocal1) {
                    supCapacidad++;
                    printf("La cantidad de inscriptos en el taller 1 superó la capacidad del local 1\n");
                }
                if (totalTaller2 > capacLocal2) {
                    supCapacidad++;
                    printf("La cantidad de inscriptos en el taller 2 superó la capacidad del local 2\n");
                }
                if (totalTaller3 > capacLocal3) {
                    supCapacidad++;
                    printf("La cantidad de inscriptos en el taller 3 superó la capacidad del local 3\n");
                }
                if (totalTaller4 > capacLocal4) {
                    supCapacidad++;
                    printf("La cantidad de inscriptos en el taller 4 superó la capacidad del local 4\n");
                }
                if (totalTaller5 > capacLocal5) {
                    supCapacidad++;
                    printf("La cantidad de inscriptos en el taller 5 superó la capacidad del local 5\n");
                }

                printf("El taller con la mayor cantidad de descuentos es el taller %d\n", tallerMaxDescuentos);
               
                printf("Porcentaje de participantes que han hecho un curso previo en el taller 1: %.2f%%\n", porcentaje(participoAntes1, totalTaller1));
                printf("Porcentaje de participantes que han hecho un curso previo en el taller 2: %.2f%%\n", porcentaje(participoAntes2, totalTaller2));
                printf("Porcentaje de participantes que han hecho un curso previo en el taller 3: %.2f%%\n", porcentaje(participoAntes3, totalTaller3));
                printf("Porcentaje de participantes que han hecho un curso previo en el taller 4: %.2f%%\n", porcentaje(participoAntes4, totalTaller4));
                printf("Porcentaje de participantes que han hecho un curso previo en el taller 5: %.2f%%\n", porcentaje(participoAntes5, totalTaller5));
               
                break;
            
                printf("Opción no válida. Intente de nuevo.\n");
                break;
        }
    } while (opcion != 6);

    return 0;
}
