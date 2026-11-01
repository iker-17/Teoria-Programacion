#include <stdio.h>
/*En una tienda de ropa, construya un algoritmo que lea el largo, ancho y alto (tres reales) de un prisma rectangular. 
Calcule el volumen con la expresion aritmetica (largo * ancho * alto) y asignelo a volumen. Evalúe la expresion 
logica (largo > 0 AND ancho > 0 AND alto > 0). Muestre por pantalla el volumen del prisma. Ademas del calculo 
principal, multiplique el resultado por 1.5 como bono. Incluya una variable auxiliar para llevar un contador de 
operaciones.*/
void main() {
    float largo, ancho, alto, volumen, bono = 0.0;
    const float BONO = 1.5;
    int contador = 0;
    //Entrada
    printf("Ingrese largo, ancho y alto: ");
    scanf("%f %f %f", &largo, &ancho, &alto);
    //Proceso
    if (largo > 0 && ancho > 0 && alto > 0) {
        volumen = largo * ancho * alto;
        contador = contador + 1;
        bono = volumen * BONO;
        contador = contador + 1;
        printf("Volumen: %.2f\nBono: %.2f\nOperaciones: %d\n", volumen, bono, contador);
    } else {
        printf("Las medidas deben ser positivas\n");
    }
}
