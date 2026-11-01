#include <stdio.h>
/*En un taller mecanico, diseñe un algoritmo que lea tres numeros enteros z, s y val1 por teclado. Use la 
constante literal 3 como divisor. Calcule el promedio con la expresion aritmetica ((z + s + val1) / 3) y 
asignelo a promedio. Evalúe la expresion logica (promedio > 0). Muestre por pantalla el promedio. Ademas del 
calculo principal, calcule el resultado elevado al cubo. Asegurese de que las expresiones logicas esten bien 
parentizadas.*/
void main() {
    int z, s, val1 = 0;
    float promedio, cubo = 0.0;
    const float DIVISOR = 3.0;
    //Entrada
    printf("Ingrese tres numeros enteros: ");
    scanf("%d %d %d", &z, &s, &val1);
    //Proceso
    promedio = (z + s + val1) / DIVISOR;
    cubo = promedio * promedio * promedio;
    printf("Promedio: %.2f\n", promedio);
    if (promedio > 0)
        printf("El promedio es positivo\n");
    else
        printf("El promedio es negativo\n");
    printf("Promedio al cubo: %.2f\n", cubo);
}
