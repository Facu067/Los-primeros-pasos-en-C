#include <stdio.h>

// Prototipo de la función diaAnterior
void diaAnterior(int d, int m, int a);

int main() {
    int dia, mes, anio;
    
    // Solicitar al usuario ingresar la fecha
    printf("Ingrese la fecha (formato dd mm aaaa): ");
    scanf("%d %d %d", &dia, &mes, &anio);
    
    // Llamar al procedimiento diaAnterior para obtener la fecha anterior
    printf("La fecha anterior es: ");
    diaAnterior(dia, mes, anio);
    
    return 0;
}

// Definición del procedimiento diaAnterior
void diaAnterior(int d, int m, int a) {
    // Verificar si es el primer día del mes
    if (d == 1) {
        // Verificar si es enero
        if (m == 1) {
            // Ajustar al último día del año anterior
            printf("%d %d %d\n", 31, 12, a - 1);
        } else {
            // Obtener el último día del mes anterior
            switch (m - 1) {
                case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                    printf("%d %d %d\n", 31, m - 1, a);
                    break;
                case 4: case 6: case 9: case 11:
                    printf("%d %d %d\n", 30, m - 1, a);
                    break;
                case 2:
                    // Verificar si el año es bisiesto
                    if ((a % 4 == 0 && a % 100 != 0) || (a % 400 == 0))
                        printf("%d %d %d\n", 29, m - 1, a);
                    else
                        printf("%d %d %d\n", 28, m - 1, a);
                    break;
            }
        }
    } else {
        // Simplemente restar un día al día actual
        printf("%d %d %d\n", d - 1,m,a);
        }
}