#include <stdio.h>

void main() {
    const float DIVISOR_EXTRA = 2.0;
    float nota1, nota2, nota3, suma_total, menor, promedio, resultado_dividido;
    //Entrada
    printf("Ingrese tres calificaciones: ");
    scanf("%f %f %f", &nota1, &nota2, &nota3);
    //Proceso
    suma_total = nota1 + nota2 + nota3;
    menor = nota1;
    if (nota2 < menor)
        menor = nota2;
    if (nota3 < menor)
        menor = nota3;
    promedio = (suma_total - menor) / 2;
    resultado_dividido = promedio / DIVISOR_EXTRA;
    //Salida
    printf("Menor nota: %.2f\nPromedio final: %.2f\nResultado dividido: %.2f\n", menor, promedio, resultado_dividido);
}
