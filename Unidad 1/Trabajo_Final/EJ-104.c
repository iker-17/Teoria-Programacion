#include <stdio.h>

void main() {
    float capital, tasa, interes_generado, monto_total = 0.0;
    int tiempo = 0;
    //Entrada
    printf("Ingrese capital, tasa anual y tiempo: ");
    scanf("%f %f %d", &capital, &tasa, &tiempo);
    //Proceso y salida
    if (capital > 0 && tasa > 0 && tiempo > 0) {
        interes_generado = capital * tasa * tiempo / 100;
        monto_total = capital + interes_generado;
        printf("Capital: %.2f\nInteres generado: %.2f\nMonto total: %.2f\n", capital, interes_generado, monto_total);
    } else {
        printf("Los datos deben ser positivos\n");
    }
}
