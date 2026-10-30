#include <stdio.h>

/*Un estudiante necesita saber qué calificación debe obtener en el tercer certamen (C3)
para aprobar la asignatura con una nota final de 60/100 puntos.
Se considera que los certámenes valen 70% y el laboratorio 30%.*/
int main() {
    float c1, c2, c3, nc, nl;
    printf("Ingrese las notas de C1, C2 y del laboratorio: ");
    scanf("%f %f %f", &c1, &c2, &nl);
    nc = (60-(nl*0.3))/0.7;
    c3 = (nc * 3) - c1 - c2;
    printf("La nota minima necesaria en el tercer certamen (C3) es: %.2f\n", c3);
    printf("Nota: Si el resultado es negativo, significa que ya apruebas con las notas actuales (y si es mayor a 100, no es posible aprobar).\n");
    return 0;
}
