#include <stdio.h>

void main() {
    float PI = 3.14159;
    float radio, area = 0.0;
    int numero, divisor, residuo = 0;
    //Entrada
    printf("Ingrese el radio: ");
    scanf("%f", &radio);
    printf("Ingrese un numero entero y un divisor: ");
    scanf("%d %d", &numero, &divisor);
    //Proceso y salida
    if (radio >= 0 && divisor != 0) {
        area = PI * radio * radio;
        residuo = numero % divisor;
        printf("Area del circulo: %.2f\nResiduo de la division: %d\nOperacion finalizada correctamente\n", area, residuo);
    } else {
        printf("Datos invalidos: radio negativo o divisor cero\n");
    }
}
