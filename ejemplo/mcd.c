#include <stdio.h>
/*Crear un codigo para calcular el máximo común divisor usando el algoritmo de Euclides 
sin estructuras repetitivas, se debe dividir el numero mayor entre el numero menor y sacar
el cociente y residuo para calcular el MCD */
void main() {
    int num1, num2, cos1, res1, cos2, res2, cos3, res3, mcd, mcm;
    printf("Ingrese el primer numero: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo numero: ");
    scanf("%d", &num2);
    if (num1 < num2) {
        cos1 = num2 / num1;
        res1 = num2 % num1;
        if (res1 == 0) {
            mcm = (num1 * num2) / num1;
            printf("El MCD es: %d\n", num1);
            printf("El MCM es: %d\n", mcm);
        } else {
            cos2 = num1 / res1;
            res2 = num1 % res1;
            if (res2 == 0) {
                printf("El MCD es: %d\n", res1);
                mcm = (num1 * num2) / res1;
                printf("El MCM es: %d\n", mcm);
            } else {
                cos3 = res1 / res2;
                res3 = res1 % res2;
                if (res3 == 0) {
                    printf("El MCD es: %d\n", res2);
                    mcm = (num1 * num2) / res2;
                    printf("El MCM es: %d\n", mcm);
                } else {
                    printf("No se pudo calcular el MCD con los numeros ingresados.\n");
                }
            }
        }
    } else {
        if (num1 > num2) {
            cos1 = num1 / num2;
            res1 = num1 % num2;
            if (res1 == 0) {
                mcm = (num1 * num2) / num2;
                printf("El MCD es: %d\n", num2);
                printf("El MCM es: %d\n", mcm);
            } else {
                cos2 = num2 / res1;
                res2 = num2 % res1;
                if (res2 == 0) {
                    mcm = (num1 * num2) / res1;
                    printf("El MCD es: %d\n", res1);
                    printf("El MCM es: %d\n", mcm);
                } else {
                    cos3 = res1 / res2;
                    res3 = res1 % res2;
                    if (res3 == 0) {
                        printf("El MCD es: %d\n", res2);
                        mcm = (num1 * num2) / res2;
                        printf("El MCM es: %d\n", mcm);
                    } else {
                        printf("No se pudo calcular el MCD con los numeros ingresados.\n");
                    }
                }
            }
        } else {
            printf("Los numeros son iguales, el MCD es: %d\n", num1);
        }
    }

}