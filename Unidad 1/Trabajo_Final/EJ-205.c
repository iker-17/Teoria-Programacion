#include <stdio.h>
#include <stdlib.h>

void main() {
    int n, positivo, par, es_par_positivo, diferencia = 0;
    //Entrada
    printf("Ingrese un numero entero: ");
    scanf("%d", &n);
    //Proceso
    positivo = (n > 0);
    par = (n % 2 == 0);
    es_par_positivo = positivo && par;
    diferencia = abs(positivo - par);
    //Salida
    if (es_par_positivo)
        printf("El numero es par y positivo\n");
    else
        printf("El numero no es par y positivo\n");
    printf("Diferencia absoluta: %d\n", diferencia);
}
