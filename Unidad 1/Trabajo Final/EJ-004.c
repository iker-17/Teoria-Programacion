#include <stdio.h>

void main() {
    int MAYORIA_EDAD = 18;
    char nombre[50] = "";
    int anio_nacimiento, anio_actual, edad, minimo = 0;

    // Entrada
    printf("Ingrese el nombre: ");
    scanf(" %49[^\n]", nombre);
    printf("Ingrese el año de nacimiento y el actual: ");
    scanf("%d %d", &anio_nacimiento, &anio_actual);

    // Proceso y salida
    if (anio_nacimiento < 0 || anio_actual < anio_nacimiento) {
        printf("Fechas invalidas: no se permiten edades negativas\n");
    } else {
        edad = anio_actual - anio_nacimiento;
        minimo = edad;
        if (anio_nacimiento < minimo) minimo = anio_nacimiento;
        if (anio_actual < minimo) minimo = anio_actual;

        if (edad >= MAYORIA_EDAD)
            printf("%s tiene %d años y es mayor de edad\n", nombre, edad);
        else
            printf("%s tiene %d años y es menor de edad\n", nombre, edad);
        printf("Valor minimo entre las variables numericas: %d\n", minimo);
    }
}
