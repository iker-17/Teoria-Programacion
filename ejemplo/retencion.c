#include <stdio.h>
void main() {
    /*Crear un sistema que pida al usuario el valor total de la factura y de que tipo es: si es servicio 
    profesional se retiene el 10%, si servicio es educativo se retiene el 8%, se devolvera el
    el valor retenido*/
    //DATOS
    float valor_factura, retencion, porcentaje = 0.0;
    int seleccion = 0; //1 para Profesional y 2 para Educativo
    //float PROFESIONAL = valor_factura * 0.10;
    //float EDUCATIVO = valor_factura * 0.08;

    //ENTRADA DE DATOS
    printf("Ingrese el valor de la factura:\n");
    scanf("%f", &valor_factura);
    printf("Ingrese el tipo de factura. \n1 para Profesional \n2 para Educativo):\n");
    scanf("%d", &seleccion);
    if (seleccion > 0 && seleccion <= 3) {
        porcentaje = (seleccion == 1) ? 0.10 : 0.08;
        retencion = valor_factura * porcentaje;
    } else {
        printf("Usted no ha seleccionado un valor válido.\n");
    }
    printf("El valor retenido es: $%.2f", retencion);
}
