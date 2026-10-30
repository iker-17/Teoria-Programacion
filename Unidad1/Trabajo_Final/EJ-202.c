#include <stdio.h>

void main() {
    int z, s, val1 = 0;
    float promedio, cubo = 0.0;
    //Entrada
    printf("Ingrese tres numeros enteros: ");
    scanf("%d %d %d", &z, &s, &val1);
    //Proceso
    promedio = (z + s + val1) / 3.0;
    cubo = promedio * promedio * promedio;
    printf("Promedio: %.2f\n", promedio);
    if (promedio > 0)
        printf("El promedio es positivo\n");
    else
        printf("El promedio es negativo\n");
    printf("Promedio al cubo: %.2f\n", cubo);
}
