#include <stdio.h>
/*En una empresa de transporte, construya un algoritmo que lea el radio (real) y el angulo (real, en grados) de un 
sector circular. Use constantes simbolicas PI = 3.14159 y FACTOR = 360. Calcule el area con la expresion aritmetica 
((PI * radio * radio * angulo) / FACTOR) y asignela a area_sector. Evalúe la expresion logica (radio > 0 AND 
angulo > 0). Muestre por pantalla el area del sector. Ademas, calcule el cuadrado del resultado principal. 
Agregue al final un resumen de los datos ingresados.*/
void main() {
    const float PI = 3.14159;
    const float FACTOR = 360;
    float radio, angulo, area_sector, cuadrado = 0.0;
    //Entrada
    printf("Ingrese radio y angulo en grados: ");
    scanf("%f %f", &radio, &angulo);
    //salida
    if (radio > 0 && angulo > 0) {
        area_sector = (PI * radio * radio * angulo) / FACTOR;
        cuadrado = area_sector * area_sector;
        printf("Area del sector: %.2f\nCuadrado del area: %.2f\n", area_sector, cuadrado);
        printf("Datos: radio %.2f, angulo %.2f grados\n", radio, angulo);
    } else {
        printf("Radio y angulo deben ser positivos\n");
        printf("Datos: radio %.2f, angulo %.2f grados\n", radio, angulo);
    }
}
