#include <stdio.h>
/*En una floreria, diseñe un algoritmo que lea el capital (real), la tasa de interes anual (real) y el tiempo en 
años (entero). Use la constante literal 100. Calcule el interes con la expresion aritmetica (capital * tasa * 
tiempo / 100) y el monto total con (capital + interes). Asigne los resultados a interes_generado y monto_total. 
Muestre por pantalla el desglose. Adicionalmente, redondee el resultado a 2 decimales. Agregue una validacion para 
asegurar que los datos sean positivos.*/
void main() {
    const int PORCENTAJE = 100;
    float capital, tasa, interes_generado, monto_total = 0.0;
    int tiempo = 0;
    //Entrada
    printf("Ingrese capital, tasa anual y tiempo: ");
    scanf("%f %f %d", &capital, &tasa, &tiempo);
    //Proceso y salida
    if (capital > 0 && tasa > 0 && tiempo > 0) {
        interes_generado = capital * tasa * tiempo / PORCENTAJE;
        monto_total = capital + interes_generado;
        printf("Capital: %.2f\nInteres generado: %.2f\nMonto total: %.2f\n", capital, interes_generado, monto_total);
    } else {
        printf("Los datos deben ser positivos\n");
    }
}
