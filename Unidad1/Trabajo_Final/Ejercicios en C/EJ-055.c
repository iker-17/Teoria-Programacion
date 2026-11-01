#include <stdio.h>
#include <stdbool.h>
/*En una jugueteria, diseñe un algoritmo que lea un numero entero de 3 cifras por teclado. Use constantes literales 
10 y 100 con operadores division entera y modulo para extraer las centenas, decenas y unidades. Asignelas a 
variables c, d, u. Construya el numero invertido con la expresion aritmetica (u * 100 + d * 10 + c). Evalúe la 
expresion logica (numero == invertido) para determinar si es capicua. Muestre por pantalla el numero, el invertido 
y si es capicua. Ademas, calcule el valor minimo de todas las variables utilizadas. Asegurese de que las expresiones 
logicas esten bien parentizadas.*/
void main() {
    int numero, c, d, u, invertido, minimo = 0;
    const int CIEN = 100; 
    const int DIEZ = 10;
    bool es_capicua = false;
    //Entrada
    printf("Ingrese un numero entero de 3 cifras: ");
    scanf("%d", &numero);
    //Proceso y salida
    if (numero >= 100 && numero <= 999) {
        c = numero / CIEN;
        d = (numero / DIEZ) % DIEZ;
        u = numero % DIEZ;
        invertido = u * CIEN + d * DIEZ + c;
        es_capicua = (numero == invertido);
        minimo = numero;
        if (invertido < minimo) minimo = invertido;
        if (c < minimo) minimo = c;
        if (d < minimo) minimo = d;
        if (u < minimo) minimo = u;
        printf("Numero: %d\nInvertido: %03d\n", numero, invertido);
        printf("Capicua: %s\nMinimo numerico: %d\n",
               es_capicua ? "Si" : "No", minimo);
    } else {
        printf("El numero debe tener 3 cifras positivas\n");
    }
}
