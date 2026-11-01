#include <stdio.h>
/*En una libreria, cree un algoritmo que lea un monto en soles (real). Use una constante simbolica TASA_CAMBIO = 
0.027. Calcule el equivalente en dolares con la expresion aritmetica (soles * TASA_CAMBIO) y asignelo a dolares. 
Evalúe la expresion relacional (dolares > 0). Muestre por pantalla 'X soles equivalen a Y dolares'. Ademas del 
calculo principal, calcule el producto del resultado por PI. Asegurese de inicializar todas las variables antes 
de usarlas.*/
void main() {
    const float TASA_CAMBIO = 0.27;
    const float PI = 3.14159;
    float soles, dolares, producto = 0.0;
    //Entrada
    printf("Ingrese el monto en soles: ");
    scanf("%f", &soles);
    dolares = soles * TASA_CAMBIO;
    producto = dolares * PI;
    //Salida
    printf("%.2f soles equivalen a %.2f dolares\n", soles, dolares);
    if (dolares > 0)
        printf("El resultado es positivo\n");
    else
        printf("El resultado es negativo\n");
    printf("Producto por PI: %.2f\n", producto);
}
