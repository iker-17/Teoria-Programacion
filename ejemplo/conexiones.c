#include <stdio.h>

void main() {
    float r1, r2, req, v, i, p;
    float RM = 3.0;
    float IM = 2.0;
    float PM = 20.0; 
    int conexion;
    printf("Ingrese el valor de R1, R2 y V: ");
    scanf("%f %f %f", &r1, &r2, &v);
    if (r1 <= 0) {
        printf("R1 debe ser mayor que cero.\n");
    }
    if (r2 <= 0) {
        printf("R2 debe ser mayor que cero.\n");
    }
    if (v <= 0) {
        printf("El voltaje debe ser mayor que cero.\n");
    }

    printf("Seleccione la conexion (1=serie, 2=paralelo): ");
    scanf("%d", &conexion);
    if (conexion != 1 && conexion != 2) {
        printf("Opcion no valida.\n");
    }

    //Calcula la resistencia equivalente segun el tipo de conexion.
    if (conexion == 1) {
        req = r1 + r2;
    } else {
        req = (r1 * r2) / (r1 + r2);
    }

    //Calcula la corriente y la potencia total
    i = v / req;
    p = v * i;
    printf("Resistencia equivalente: %.2f ohmios\n", req);
    printf("Corriente total: %.2f A\n", i);
    printf("Potencia total: %.2f W\n", p);
    printf("Revision de limites:\n");
    if (req < RM) {
        printf("La Resistencia equivalente debe ser de al menos %.1f ohmios\n", RM);
    } else {
        printf("Resistencia equivalente si se cumple\n");
    }
    if (i > IM) {
        printf("La corriente supera el maximo de %.1f A\n", IM);
    } else {
        printf("Corriente si cumple\n");
    }
    if (p > PM) {
        printf("La potencia supera el maximo de %.1f W\n", PM);
    } else {
        printf("Potencia si se cumple.\n");
    }
    if (req >= RM && i <= IM && p <= PM) {
        printf("Todas las condiciones se cumplen\n");
    }
}