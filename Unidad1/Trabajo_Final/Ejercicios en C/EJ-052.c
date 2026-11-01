#include <stdio.h>
/*En una empresa de transporte, construya un algoritmo que simule una calculadora. Lea dos numeros reales n y r, y 
un operador aritmetico (caracter): '+', '-', '*', '/'. Use expresiones relacionales para seleccionar la operacion. 
Valide division por cero con la expresion logica (operador == '/' AND r == 0.0). Asigne el resultado a una variable 
real resultado. Use constantes literales para los operadores. Muestre por pantalla la operacion completa y el 
resultado. Ademas, calcule el valor minimo de todas las variables utilizadas. Asegurese de inicializar todas las 
variables antes de usarlas.*/
void main() {
    float n, r, resultado, minimo = 0.0;
    const char SUMA = '+';
    const char RESTA = '-';
    const char MULTIPLICACION = '*';
    const char DIVISION = '/';
    char operador = 0;
    //Entrada
    printf("Ingrese n, r y el operador (+, -, *, /): ");
    scanf("%f %f %c", &n, &r, &operador);
    //Proceso y salida
    if (operador == DIVISION && r == 0.0) {
        printf("No se puede dividir entre cero\n");
    } else if (operador != SUMA && operador != RESTA &&
               operador != MULTIPLICACION && operador != DIVISION) {
        printf("Operador no valido\n");
    } else {
        if (operador == SUMA) resultado = n + r;
        else if (operador == RESTA) resultado = n - r;
        else if (operador == MULTIPLICACION) resultado = n * r;
        else resultado = n / r;

        minimo = n;
        if (r < minimo) minimo = r;
        if (resultado < minimo) minimo = resultado;

        printf("Operacion: %.2f %c %.2f = %.2f\nMinimo numerico: %.2f\n",
               n, operador, r, resultado, minimo);
    }
}
