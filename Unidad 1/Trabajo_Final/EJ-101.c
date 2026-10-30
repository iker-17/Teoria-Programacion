#include <stdio.h>

void main() {
    float numero1, numero2, promedio, potencia = 0.0;
    //Entrada
    printf("Ingrese dos numeros reales: ");
    scanf("%f %f", &numero1, &numero2);
    //Proceso
    promedio = (numero1 + numero2) / 2;
    potencia = promedio * promedio * promedio * promedio;
    //Salida
    printf("Promedio: %.2f\n", promedio);
    if (promedio > 0)
        printf("El promedio es positivo\n");
    else if (promedio < 0)
        printf("El promedio es negativo\n");
    else
        printf("El promedio es neutro\n");
    printf("Potencia cuarta: %.2f\n", potencia);
}
