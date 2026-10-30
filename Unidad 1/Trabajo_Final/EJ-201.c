#include <stdio.h>
void main() {
    float largo, ancho, alto, volumen, bono = 0.0;
    int contador = 0;
    //Entrada
    printf("Ingrese largo, ancho y alto: ");
    scanf("%f %f %f", &largo, &ancho, &alto);
    //Proceso
    if (largo > 0 && ancho > 0 && alto > 0) {
        volumen = largo * ancho * alto;
        contador = contador + 1;
        bono = volumen * 1.5;
        contador = contador + 1;
        printf("Volumen: %.2f\nBono: %.2f\nOperaciones: %d\n", volumen, bono, contador);
    } else {
        printf("Las medidas deben ser positivas\n");
    }
}
