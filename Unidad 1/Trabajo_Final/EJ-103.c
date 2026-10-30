
#include <stdio.h>
#include <stdbool.h>

void main() {
    int a, i = 0;
    bool es_primo = true;
    float referencia, porcentaje = 0.0;
    //Entrada
    printf("Ingrese un numero entero: ");
    scanf("%d", &a);
    printf("Ingrese una referencia: ");
    scanf("%f", &referencia);
    //Proceso
    if (a <= 1)
        es_primo = false;
    else {
        for (i = 2; i <= a - 1; i++) {
            if (a % i == 0) {
                es_primo = false;
                break;
            }
        }
    }
    //Salida
    if (es_primo)
        printf("Es primo\n");
    else
        printf("No es primo\n");

    if (referencia > 0) {
        porcentaje = (a * 100.0) / referencia;
        printf("Porcentaje: %.2f%%\n", porcentaje);
    } else {
        printf("Referencia no valida\n");
    }
}
