#include <stdio.h>

void main() {
    int z, s, cociente, residuo = 0;
    float promedio, diferencia = 0.0;
    //Entrada
    printf("Ingrese dos numeros enteros: ");
    scanf("%d %d", &z, &s);
    //Proceso y salida
    if (s != 0) {
        cociente = z / s;
        residuo = z % s;
        promedio = (z + s) / 2.0;
        diferencia = cociente - promedio;
        printf("Cociente: %d\nResiduo: %d\nPromedio: %.2f\nDiferencia: %.2f\n", cociente, residuo, promedio, diferencia);
    } else {
        printf("No se puede dividir entre cero\n");
    }
}
