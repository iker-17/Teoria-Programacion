#include <stdio.h>

void main() {
    float n, r, resultado, minimo = 0.0;
    char operador = ' ';
    //Entrada
    printf("Ingrese n, r y el operador (+, -, *, /): ");
    scanf("%f %f %c", &n, &r, &operador);
    //Proceso y salida
    if ((operador == '/') && (r == 0.0)) {
        printf("No se puede dividir entre cero\n");
    } else if (operador != '+' && operador != '-' && operador != '*' && operador != '/') {
        printf("Operador no valido\n");
    } else {
        if (operador == '+') resultado = n + r;
        else if (operador == '-') resultado = n - r;
        else if (operador == '*') resultado = n * r;
        else resultado = n / r;
        minimo = n;
        if (r < minimo) minimo = r;
        if (resultado < minimo) minimo = resultado;
        printf("Operacion: %.2f %c %.2f = %.2f\nMinimo numerico: %.2f\n",
               n, operador, r, resultado, minimo);
    }
}
