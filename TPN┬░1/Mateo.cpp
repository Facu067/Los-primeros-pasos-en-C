#include <stdio.h>

const int NUM_TALLERES = 5;        // Número de talleres
const int CAPACIDAD_LOCAL = 20;    // Capacidad del local para cada taller
const float COSTO_INSCRIPCION = 100.0; // Costo de la inscripción en todos los talleres
// Función para obtener el porcentaje de personas que realizaron taller previamente
float obtenerPorcentajePrevio(int personas_previamente, int total_inscripciones);

// Función para procesar las inscripciones en un taller específico
void procesarInscripciones(int numero_taller, int *inscripciones_mayores_40, float *max_descuentos, float *suma_edades, int *max_inscripciones_superadas, int *orden_max_inscripciones);
float obtenerPorcentajePrevio(int personas_previamente, int total_inscripciones) {
    if (total_inscripciones == 0) {
        return 0.0; // Evitar división por cero
    }
    return (float)personas_previamente / total_inscripciones * 100.0;
}
void procesarInscripciones(int numero_taller, int *inscripciones_mayores_40, float *max_descuentos, float *suma_edades, int *max_inscripciones_superadas, int *orden_max_inscripciones) {
    int inscripciones_taller = 0;
    int total_personas_previamente = 0;

    // Procesar inscripciones hasta alcanzar la capacidad del local
    while (inscripciones_taller < CAPACIDAD_LOCAL) {
        printf("Inscripcion %d en Taller %d:\n", inscripciones_taller + 1, numero_taller);

        // Ingresar edad del participante
        int edad;
        printf("Ingrese la edad en años: ");
        scanf("%d", &edad);

        // Ingresar si realizó algún taller previamente (S/N)
        char realizo_previamente;
        printf("¿Ha realizado algún taller previamente? (S/N): ");
        scanf(" %c", &realizo_previamente);

        // Contabilizar la edad para el promedio
        *suma_edades += edad;

        // Contar inscripción
        int total_inscripciones = numero_taller * CAPACIDAD_LOCAL + inscripciones_taller + 1;

        // Verificar si es mayor de 40 años
        if (edad > 40) {
            (*inscripciones_mayores_40)++;
        }

        // Verificar descuento del 25% para menores de 25 años
        if (edad < 25) {
            (*max_descuentos)++;
        }

        inscripciones_taller++;

        // Verificar si se supera la capacidad del local
        if (inscripciones_taller > *max_inscripciones_superadas) {
            *max_inscripciones_superadas = inscripciones_taller;
            *orden_max_inscripciones = numero_taller; // Guardar el número de orden del taller
        }

        printf("\n");
    }
}
int main() {
    int inscripciones_mayores_40 = 0;
    float max_descuentos = 0;
    float suma_edades = 0;
    int max_inscripciones_superadas = 0;
    int orden_max_inscripciones = 0;
    int total_inscripciones = 0;

    // Procesar inscripciones por cada taller
    for (int i = 1; i <= NUM_TALLERES; i++) {
        printf("=== Taller %d ===\n", i);
        procesarInscripciones(i, &inscripciones_mayores_40, &max_descuentos, &suma_edades, &max_inscripciones_superadas, &orden_max_inscripciones);
        total_inscripciones += CAPACIDAD_LOCAL;
    }

    // Calcular porcentaje de personas que realizaron taller previamente por cada taller
    for (int i = 1; i <= NUM_TALLERES; i++) {
        float porcentaje_previamente = obtenerPorcentajePrevio(i, total_inscripciones);
        printf("Porcentaje de personas que realizaron algún taller previamente en Taller %d: %.2f%%\n", i, porcentaje_previamente);
    }

    // Calcular promedio de edad de los participantes en todos los talleres
    float promedio_edad = suma_edades / total_inscripciones;

    // Mostrar resultados finales
    printf("Cantidad total de inscripciones de personas mayores de 40 años: %d\n", inscripciones_mayores_40);
    printf("Número de orden del taller con más inscripciones superando la capacidad: %d\n", orden_max_inscripciones);
    printf("Máxima cantidad de descuentos otorgados en un taller: %.0f\n", max_descuentos);
    printf("Promedio de edad de los participantes en los talleres: %.2f\n", promedio_edad);

    return 0;
}