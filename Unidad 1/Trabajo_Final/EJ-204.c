#include <stdio.h>

void main() {
    const float PI = 3.14159, FACTOR = 360;
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
