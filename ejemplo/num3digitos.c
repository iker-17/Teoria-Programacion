#include <stdio.h>
//Ingresar un numero entero de 3 digitos del 100 al 999 y descomponerlo en unidades, decenas y centenas y la suma total de su mismo numero
void main() {
    int num, unidades, decenas, centenas;
    printf("Ingrese un numero entero de 3 digitos (100-999): ");
    scanf("%d", &num);
    if (num >= 100 && num <= 999) {
        centenas = (num / 100) * 100;
        decenas = (num / 10) % 10 * 10;
        unidades = num % 10;
        printf("Centenas: %d\n", centenas);
        printf("Decenas: %d\n", decenas);
        printf("Unidades: %d\n", unidades);
        printf("Suma total del numero: %d\n", centenas + decenas + unidades);
    } else {
        printf("El numero ingresado no es de 3 digitos.\n");
    }
}