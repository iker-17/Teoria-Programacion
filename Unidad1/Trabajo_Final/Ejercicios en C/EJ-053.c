#include <stdio.h>
/*En un cine, diseñe un algoritmo que lea una nota (real entre 0 y 100) y la convierta a letra segun escala: A 
(90-100), B (80-89), C (70-79), D (60-69), F (0-59). Use constantes simbolicas para los limites. Evalúe las 
expresiones logicas relacionales para asignar la letra correspondiente a una variable de tipo caracter llamada 
calificacion. Asigne tambien el mensaje descriptivo a una variable cadena. Muestre por pantalla la nota y la letra. 
Ademas, calcule el valor minimo de todas las variables utilizadas. Incluya una variable auxiliar para llevar un 
contador de operaciones.*/
void main() {
    const float LIMITE_A = 90; 
    const float LIMITE_B = 80;
    const float LIMITE_C = 70;
    const float LIMITE_D = 60;
    const float MIN_NOTA = 0; 
    const float MAX_NOTA = 100;
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
