#include <stdio.h>
/*En una empresa de transporte, diseñe un algoritmo que calcule el area de un circulo. Declare una constante 
simbolica PI = 3.14159 y una variable real radio. Lea el radio por teclado. Calcule el area con la expresion 
aritmetica (PI * radio * radio) y asignela a la variable area. Muestre por pantalla el resultado con un mensaje 
descriptivo. Justifique por que se usa constante simbolica y no un literal para PI. Ademas del calculo principal, 
calcule el resto de una division adicional. Incluya un mensaje de confirmacion al finalizar la operacion.*/
void main() {
    float PI = 3.14159;
    float radio, area = 0.0;
    int numero, divisor, residuo = 0;
    //Entrada
    printf("Ingrese el radio: ");
    scanf("%f", &radio);
    printf("Ingrese un numero entero y un divisor: ");
    scanf("%d %d", &numero, &divisor);
    //Proceso y salida
    if (radio >= 0 && divisor != 0) {
        area = PI * radio * radio;
        residuo = numero % divisor;
        printf("Area del circulo: %.2f\nResiduo de la division: %d\nOperacion finalizada correctamente\n", area, residuo);
    } else {
        printf("Datos invalidos: radio negativo o divisor cero\n");
    }
}
