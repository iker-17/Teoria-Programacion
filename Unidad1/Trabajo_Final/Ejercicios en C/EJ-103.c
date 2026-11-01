#include <stdio.h>
#include <stdbool.h>
/*En un gimnasio, construya un algoritmo que lea un numero entero a por teclado. Use constantes literales 2 y a-1 
como rango. Evalúe las expresiones logicas (a > 1) y (no existe ningun divisor en el rango [2, a-1]). Asigne el 
resultado booleano a es_primo. Muestre por pantalla si el numero es primo o no. Identifique el tipo de dato de 
cada variable. Adicionalmente, calcule el porcentaje del resultado respecto a un valor de referencia. Justifique 
el tipo de dato simple elegido para cada variable.*/
void main() {
    int num;
    bool es_primo = true;
    float ref, porct = 0;
    const int INICIO = 2;
    // Entrada
    printf("Ingrese un numero entero: ");
    scanf("%d", &num);
    const int FIN = num - 1;
    printf("Ingrese la referencia: ");
    scanf("%f", &ref);
    // Proceso
    if (num > 1000) {
        printf("Numero fuera del rango permitido\n");
    } else { 
        if (num <= 1) es_primo = false;
        if (FIN >= INICIO && num % INICIO == 0) es_primo = false;
        if (FIN >= 3 && num % 3 == 0) es_primo = false;
        if (FIN >= 5 && num % 5 == 0) es_primo = false;
        if (FIN >= 7 && num % 7 == 0) es_primo = false;
        if (FIN >= 11 && num % 11 == 0) es_primo = false;
        if (FIN >= 13 && num % 13 == 0) es_primo = false;
        if (FIN >= 17 && num % 17 == 0) es_primo = false;
        if (FIN >= 19 && num % 19 == 0) es_primo = false;
        if (FIN >= 23 && num % 23 == 0) es_primo = false;
        if (FIN >= 29 && num % 29 == 0) es_primo = false;
        if (FIN >= 31 && num % 31 == 0) es_primo = false;

        // Salida
        if (es_primo)
            printf("Es primo\n");
        else
            printf("No es primo\n");

        if (ref > 0) {
            porct = num * 100.0 / ref;
            printf("Porcentaje: %.2f%%\n", porct);
        } else {
            printf("Referencia no valida\n");
        }
    }
}
