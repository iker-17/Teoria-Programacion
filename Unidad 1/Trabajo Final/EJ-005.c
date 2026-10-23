#include <stdio.h>

void main() {
    int a = 0, residuo = 0;

    // Entrada
    printf("Ingrese un numero entero: ");
    scanf("%d", &a);

    // Proceso
    printf("Calculando el residuo y verificando el resultado...\n");
    residuo = a % 7;

    // Salida
    printf("Residuo: %d\n", residuo);
    if (residuo == 0 && a > 0)
        printf("Es multiplo de 7\n");
    else
        printf("No es multiplo de 7\n");

    if (residuo % 2 == 0)
        printf("El residuo es par\n");
    else
        printf("El residuo es impar\n");
}
