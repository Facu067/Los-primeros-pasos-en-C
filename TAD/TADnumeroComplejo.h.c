#include <math.h>

typedef struct{
    int partreal;
    int partimag;
} Complejo;

/* Interface de Usuario */
Complejo crear(int a, int b);
int parteReal(Complejo c1);
int imag(Complejo c1);
Complejo sumar(Complejo c1, Complejo c2);
Complejo restar(Complejo c1, Complejo c2);
float modulo(Complejo c1);

Complejo crear(int a, int b){
    Complejo z;
    z.partreal = a;
    z.partimag = b;
    return z;
}

int parteReal(Complejo c1){
    return c1.partreal;
}

int imag(Complejo c1){
    return c1.partimag;
}

Complejo sumar(Complejo c1, Complejo c2){
    Complejo z;
    z.partreal = c1.partreal + c2.partreal;
    z.partimag = c1.partimag + c2.partimag;
    return z;
}

Complejo restar(Complejo c1, Complejo c2){
    Complejo z;
    z.partreal = c1.partreal - c2.partreal;
    z.partimag = c1.partimag - c2.partimag;
    return z;
}

float modulo(Complejo c1){
    return sqrt((c1.partreal*c1.partreal)+(c1.partimag*c1.partimag));
}
