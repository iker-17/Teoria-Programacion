#include <stdio.h>
/*En una universidad, diseñe un algoritmo que lea dos numeros reales por teclado. Use la constante literal 2 como 
divisor. Calcule el promedio con la expresion aritmetica ((num1 + num2) / 2) y asignelo a promedio. Evalúe la 
expresion relacional (promedio > 0). Muestre por pantalla el promedio calculado. Identifique el tipo de dato de 
cada variable. Adicionalmente, calcule la potencia del resultado elevado a la 4. Incluya una seccion que explique 
brevemente el proposito del algoritmo.*/
void main() {
    float numero1, numero2, promedio, potencia = 0.0;
    const int DIVISOR = 2;
    //Entrada
    printf("Ingrese dos numeros reales: ");
    scanf("%f %f", &numero1, &numero2);
    //Proceso
    promedio = (numero1 + numero2) / DIVISOR;
    potencia = promedio * promedio * promedio * promedio;
    //Salida
    printf("Promedio: %.2f\n", promedio);
    if (promedio > 0)
        printf("El promedio es positivo\n");
    else if (promedio < 0)
        printf("El promedio es negativo\n");
    else
        printf("El promedio es neutro\n");
    printf("Potencia cuarta: %.2f\n", potencia);
}
