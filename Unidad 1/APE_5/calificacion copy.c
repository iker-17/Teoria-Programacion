#include <stdio.h>

/*Un estudiante necesita saber qué calificación debe obtener en el tercer certamen (C3)para 
aprobar la asignatura con una nota final de 60/100 puntos. Se considera que los certámenes valen 70% y el laboratorio 30%.*/
int main() {
    //Datos de entrada
    float c1, c2, c3, nc, nl;
    printf("Ingrese las notas de C1,s C2 y laboratorio: ");
    scanf("%f %f %f", &c1, &c2, &nl);
    //Proceso
    nc = (60-(nl*0.3))/0.7;
    c3 = (nc * 3) - c1 - c2;
    //Salida
    if (c3 > 100) {
        printf("No es posible aprobar la asignatura con las notas ingresadas.\n");
    } else if (c3 < 0) {
        printf("Ya has aprobado la asignatura con las notas ingresadas.\n");
    } else {
        printf("Necesitas obtener %.2f en el tercer certamen para aprobar la asignatura.\n", c3);
    }
    return 0;
} 