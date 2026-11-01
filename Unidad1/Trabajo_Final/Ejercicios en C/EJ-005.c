#include <stdio.h>
/*En una cooperativa, declare una variable entera a y una constante literal entera 7. Lea a por teclado. Calcule 
el residuo de la division (a % 7) y asigne el resultado a residuo. Evalúe la expresion logica (residuo == 0 AND 
a > 0). Muestre por pantalla el mensaje 'Es multiplo de 7' o 'No es multiplo de 7'. Indique el tipo de dato simple 
de cada variable usada. Ademas, determine si el resultado es par o impar (cuando aplique). Incluya mensajes 
informativos durante la ejecucion del algoritmo.*/
void main() {
    int a, residuo = 0;
    const int DIVISOR = 7;
    //Entrada
    printf("Ingrese un numero entero: ");
    scanf("%d", &a);
    //Proceso
    residuo = a % DIVISOR;
    //Salida
    printf("Residuo: %d\n", residuo);
    if (residuo == 0 && a > 0)
        printf("Es multiplo de 7\n");
    else
        printf("No es multiplo de 7\n");

    if (residuo % 2 == 0)
        printf("El residuo es par\n");
    else
        printf("El residuo es impar\n");
}
