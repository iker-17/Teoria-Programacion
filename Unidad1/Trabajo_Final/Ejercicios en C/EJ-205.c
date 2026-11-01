#include <stdio.h>
#include <stdlib.h>
/*En una zapateria, diseñe un algoritmo que lea un numero entero n por teclado. Use la constante literal 2. Evalúe 
las expresiones logicas (n > 0) y (n % 2 == 0). Asigne el resultado de combinarlas con AND a una variable 
es_par_positivo. Muestre por pantalla si el numero es par y positivo. Ademas, calcule el valor absoluto de la 
diferencia entre dos resultados. Identifique explicitamente los datos de entrada y la informacion de salida.*/
void main() {
    const int DIVISOR = 2;
    int n, positivo, par, es_par_positivo, diferencia = 0;
    //Entrada
    printf("Ingrese un numero entero: ");
    scanf("%d", &n);
    //Proceso
    positivo = (n > 0);
    par = (n % DIVISOR == 0);
    es_par_positivo = positivo && par;
    diferencia = abs(positivo - par);
    //Salida
    if (es_par_positivo)
        printf("El numero es par y positivo\n");
    else
        printf("El numero no es par y positivo\n");
    printf("Diferencia absoluta: %d\n", diferencia);
}
