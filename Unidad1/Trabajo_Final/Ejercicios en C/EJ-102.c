#include <stdio.h>
/*En una tienda de electronica, cree un algoritmo que lea dos numeros enteros z y s por teclado. Evalúe la expresion 
logica (s != 0) para evitar division por cero. Calcule el cociente entero con (z / s) y el residuo con (z % s). 
Asigne los resultados a cociente y residuo. Muestre por pantalla ambos valores. Adicionalmente, calcule la 
diferencia entre el resultado y el promedio. Muestre al inicio una lista de las variables que se utilizaran.*/
void main() {
    int z, s, cociente, residuo = 0;
    float promedio, diferencia = 0.0;
    const int DIVISOR = 2.0;
    //Entrada
    printf("Ingrese dos numeros enteros: ");
    scanf("%d %d", &z, &s);
    //Proceso y salida
    if (s != 0) {
        cociente = z / s;
        residuo = z % s;
        promedio = (z + s) / DIVISOR;
        diferencia = cociente - promedio;
        printf("Cociente: %d\nResiduo: %d\nPromedio: %.2f\nDiferencia: %.2f\n", cociente, residuo, promedio, diferencia);
    } else {
        printf("No se puede dividir entre cero\n");
    }
}
