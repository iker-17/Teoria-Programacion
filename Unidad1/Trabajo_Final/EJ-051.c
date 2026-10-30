
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void main() {
    const int MIN_LONGITUD = 8, MAX_LONGITUD = 20;
    const int REQUIERE_MAYUS = 1, REQUIERE_DIGITO = 1;
    char contrasena[101] = "";
    int longitud, tiene_mayus, tiene_digito, minimo;
    bool es_valida = false;

    // Entrada
    printf("Ingrese la contrasena: ");
    scanf("%100s", contrasena);

    // Proceso
    longitud = strlen(contrasena);
    if (strpbrk(contrasena, "ABCDEFGHIJKLMNOPQRSTUVWXYZ") != NULL)
        tiene_mayus = 1;
    if (strpbrk(contrasena, "0123456789") != NULL)
        tiene_digito = 1;
    if (longitud >= MIN_LONGITUD && longitud <= MAX_LONGITUD &&
        tiene_mayus == REQUIERE_MAYUS && tiene_digito == REQUIERE_DIGITO)
        es_valida = true;
    minimo = longitud;
    if (tiene_mayus < minimo) minimo = tiene_mayus;
    if (tiene_digito < minimo) minimo = tiene_digito;
    if (es_valida < minimo) minimo = es_valida;

    // Salida
    if (longitud >= MIN_LONGITUD)
        printf("Longitud minima: Cumple\n");
    else
        printf("Longitud minima: No cumple\n");

    if (longitud <= MAX_LONGITUD)
        printf("Longitud maxima: Cumple\n");
    else
        printf("Longitud maxima: No cumple\n");

    if (tiene_mayus == 1)
        printf("Mayuscula: Cumple\n");
    else
        printf("Mayuscula: No cumple\n");

    if (tiene_digito == 1)
        printf("Digito: Cumple\n");
    else
        printf("Digito: No cumple\n");

    if (es_valida)
        printf("Contrasena: Valida\n");
    else
        printf("Contrasena: No valida\n");

    printf("Minimo numerico: %d\n", minimo);
}
