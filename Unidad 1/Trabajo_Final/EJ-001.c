#include <stdio.h>

void main() {
    int x , u , val2 , suma , producto = 0;
    float promedio = 0.0;

    //Entrada
    printf("Ingrese tres numeros enteros:\n");
    scanf("%d %d %d", &x, &u, &val2);
    //Proceso
    suma = x + u + val2;
    producto = x * u * val2;
    promedio = suma / 3.0;
    //Salida
    printf("Suma: %d\nProducto: %d\nPromedio: %.2f\n", suma, producto, promedio);
    if (promedio > 0)
        printf("El promedio es positivo\n");
    else if (promedio < 0)
        printf("El promedio es negativo\n");
    else
        printf("El promedio es cero\n");
}
