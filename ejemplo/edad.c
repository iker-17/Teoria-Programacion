#include <stdio.h>
void main() {
    int edad;
    float sueldo, impuesto = 0.0;
    char* salida = "Eres menor de edad";
    scanf("%d", &edad);
    if (edad >= 18) {
        salida = "Eres mayor de edad y ganas: $700.00";
    }
    printf("%s", salida);
}