#include <stdio.h>
/*En un hotel, cree un algoritmo que lea tres calificaciones (reales) de un estudiante. Use la constante literal 2 
como divisor. Identifique la menor con expresiones relacionales. Calcule el promedio de las dos mejores con la 
expresion aritmetica ((suma_total - menor) / 2). Asignelo a promedio. Muestre por pantalla el promedio final. 
Adicionalmente, calcule el resultado divido entre una constante simbolica. Verifique que las constantes esten 
declaradas al inicio del algoritmo.*/
void main() {
    const float DIVISOR = 2.0;
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
    resultado_dividido = promedio / DIVISOR;
    //Salida
    printf("Menor nota: %.2f\nPromedio final: %.2f\nResultado dividido: %.2f\n", menor, promedio, resultado_dividido);
}
