#include <stdio.h>
/*En un taller mecanico, declare tres variables enteras llamadas x, u y val2. Solicite por teclado tres numeros 
enteros (lectura) y almacenelos en esas variables. Calcule la suma, el producto y el promedio (expresion 
aritmetica) usando una constante literal 3 como divisor. Asigne los resultados a variables suma, producto y 
promedio. Muestre por pantalla (escritura) un mensaje con los tres resultados. Justifique por que promedio debe 
ser tipo real mientras que suma y producto son enteros. Ademas del calculo principal, determine si el resultado 
es positivo o negativo. Agregue un mensaje indicando el tipo de operacion realizada.*/

void main() {
    int x , u , val2 , suma , producto = 0;
    float promedio = 0.0;
    float DIVISOR = 3.0;

    //Entrada
    printf("Ingrese tres numeros enteros:\n");
    scanf("%d %d %d", &x, &u, &val2);
    //Proceso
    suma = x + u + val2;
    producto = x * u * val2;
    promedio = suma / DIVISOR;
    //Salida
    printf("Suma: %d\nProducto: %d\nPromedio: %.2f\n", suma, producto, promedio);
    if (promedio > 0)
        printf("El promedio es positivo\n");
    else if (promedio < 0)
        printf("El promedio es negativo\n");
    else
        printf("El promedio es cero\n");
}
