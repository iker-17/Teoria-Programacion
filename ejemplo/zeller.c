#include <stdio.h>

void main() {
    //Crear un sistema que imite el algoritmo de Zeller
    //DATOS
    int dia, mes, anio, k, j, h = 0;
    int DIVISOR = 7;
    int diaSemana = 1;
    int AJUSTE = 12;

    printf("Ingrese el año:\n");
    scanf("%d", &anio);
    printf("Ingrese el mes: enero 1, febrero 2, etc.\n");
    scanf("%d", &mes);
    printf("Ingrese el día en valor numerico:\n");
    scanf("%d", &dia);

    if (mes > 0 && mes <= 2) {
        mes = mes + AJUSTE;
        anio = anio - 1;
    }
    k = anio % 100;
    j = anio / 100;
    diaSemana = (dia + (13 * (mes + 1)) / 5 + k + k/4 + j/4 + 5*j) % DIVISOR;
    printf("El día de la semana es: %d\n", diaSemana);
}