#include <stdio.h>

void main() {
    const float LIMITE_A = 90, LIMITE_B = 80, LIMITE_C = 70, LIMITE_D = 60;
    const float MIN_NOTA = 0, MAX_NOTA = 100;
    float nota, minimo = 0.0;
    int contador = 0;
    char calificacion = ' ';
    const char *mensaje = "";
    //Entrada
    printf("Ingrese la nota (0 a 100): ");
    scanf("%f", &nota);
    //Proceso y salida
    contador++;
    if (nota < MIN_NOTA || nota > MAX_NOTA) {
        printf("Nota fuera del rango 0 a 100\n");
    } else {
        if (nota >= LIMITE_A) { calificacion = 'A'; mensaje = "Excelente"; }
        else if (nota >= LIMITE_B) { calificacion = 'B'; mensaje = "Muy bueno"; }
        else if (nota >= LIMITE_C) { calificacion = 'C'; mensaje = "Bueno"; }
        else if (nota >= LIMITE_D) { calificacion = 'D'; mensaje = "Regular"; }
        else { calificacion = 'F'; mensaje = "Insuficiente"; }
        contador++;
        minimo = nota;
        if (contador < minimo) minimo = contador;
        printf("Nota: %.2f\nCalificacion: %c\nMensaje: %s\n", nota, calificacion, mensaje);
        printf("Minimo numerico: %.2f\nOperaciones: %d\n", minimo, contador);
    }
}
