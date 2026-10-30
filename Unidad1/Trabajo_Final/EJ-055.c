#include <stdio.h>
#include <stdbool.h>
void main() {
    int numero, c, d, u, invertido, minimo = 0;
    bool es_capicua = false;
    //Entrada
    printf("Ingrese un numero entero de 3 cifras: ");
    scanf("%d", &numero);
    //Proceso y salida
    if (numero >= 100 && numero <= 999) {
        c = numero / 100;
        d = (numero / 10) % 10;
        u = numero % 10;
        invertido = u * 100 + d * 10 + c;
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
