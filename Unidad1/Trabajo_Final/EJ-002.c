#include <stdio.h>
#include <math.h>

void main() {
    float FACTOR_F = 1.8; 
    int OFFSET_F = 32;
    float celsius, fahrenheit, logaritmo = 0.0;

    //Entrada
    printf("Ingrese los grados Celsius: ");
    scanf("%f", &celsius);
    //Proceso
    fahrenheit = celsius * FACTOR_F + OFFSET_F;
    //Salida
    printf("%.2f grados C equivalen a %.2f grados F\n", celsius, fahrenheit);
    if (fahrenheit > 0) {
        logaritmo = log10(fahrenheit);
        printf("Logaritmo base 10: %.2f\n", logaritmo);
    } else {
        printf("El logaritmo no esta definido para este resultado\n");
    }
    printf("FACTOR_F: %.2f, OFFSET_F: %.2f\n", FACTOR_F, OFFSET_F);
}
