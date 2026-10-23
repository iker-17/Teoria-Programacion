#include <stdio.h>

void main(){
    float IVA = 0.15;
    int num_prod = 0;
    float precio,total = 0.0;

    printf("Ingrese el numero de productos: ");
    scanf("%d",&num_prod);
    printf("Ingrese el precio: ");
    scanf("%f",&precio);

    float subtotal = precio * num_prod;
    total = subtotal + (subtotal * IVA);

    printf("El total es: %.2f\n", total);
}