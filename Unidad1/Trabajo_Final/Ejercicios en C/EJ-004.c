#include <stdio.h>
/*En una zapateria, cree un algoritmo que solicite el nombre de una persona (cadena), su año de nacimiento (entero) 
y el año actual (entero). Use una constante simbolica MAYORIA_EDAD = 18. Calcule la edad con la expresion 
aritmetica (año_actual - año_nacimiento) y asignela a edad. Evalúe la expresion relacional (edad >= MAYORIA_EDAD) 
y muestre por pantalla 'X tiene Y años y es mayor/menor de edad'. Ademas, calcule el valor minimo de todas las 
variables utilizadas. Agregue validaciones para que no haya resultados negativos.*/
void main() {
    int MAYORIA_EDAD = 18;
    char nombre[50] = "";
    int anio_nacimiento, anio_actual, edad, minimo = 0;
    //Entrada
    printf("Ingrese el nombre: ");
    scanf(" %49[^\n]", nombre);
    printf("Ingrese el año de nacimiento y el actual: ");
    scanf("%d %d", &anio_nacimiento, &anio_actual);
    //Proceso y salida
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
