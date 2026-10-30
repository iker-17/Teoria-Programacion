#include <stdio.h>

void main() {
    const float TASA_CAMBIO = 0.27, PI = 3.14159;
    float soles, dolares, producto = 0.0;
    //Entrada
    printf("Ingrese el monto en soles: ");
    scanf("%f", &soles);
    dolares = soles * TASA_CAMBIO;
    producto = dolares * PI;
    //Salida
    printf("%.2f soles equivalen a %.2f dolares\n", soles, dolares);
    if (dolares > 0)
        printf("El resultado es positivo\n");
    else
        printf("El resultado es negativo\n");
    printf("Producto por PI: %.2f\n", producto);
}
