#include <stdio.h>
/*En una zapateria, cree un algoritmo que lea el peso (real, kg) y la altura (real, m). Use constantes simbolicas 
BAJO_PESO = 18.5, NORMAL_MAX = 24.9, SOBREPESO_MAX = 29.9, OBESIDAD_MAX = 34.9, OBESIDAD_SEVERA = 39.9. Calcule el 
IMC con (peso / (altura * altura)). Use expresiones logicas relacionales para clasificar en una de 6 categorias. 
Asigne la categoria como cadena a una variable. Muestre por pantalla el IMC y la categoria. Ademas, calcule el 
valor minimo de todas las variables utilizadas. Agregue al final un resumen de los datos ingresados.*/
void main() {
    const float BAJO_PESO = 18.5; 
    const float NORMAL_MAX = 24.9; 
    const float SOBREPESO_MAX = 29.9;
    const float OBESIDAD_MAX = 34.9; 
    const float OBESIDAD_SEVERA = 39.9;
    float peso, altura, imc, minimo = 0.0;
    const char *categoria = "";
    //Entrada
    printf("Ingrese peso (kg) y altura (m): ");
    scanf("%f %f", &peso, &altura);
    //Proceso y salida
    if (peso > 0 && altura > 0) {
        imc = peso / (altura * altura);
        if (imc < BAJO_PESO) categoria = "Bajo peso";
        else if (imc <= NORMAL_MAX) categoria = "Normal";
        else if (imc <= SOBREPESO_MAX) categoria = "Sobrepeso";
        else if (imc <= OBESIDAD_MAX) categoria = "Obesidad";
        else if (imc <= OBESIDAD_SEVERA) categoria = "Obesidad severa";
        else categoria = "Obesidad extrema";
        minimo = peso;
        if (altura < minimo) minimo = altura;
        if (imc < minimo) minimo = imc;
        printf("IMC: %.2f\nCategoria: %s\nMinimo numerico: %.2f\n", imc, categoria, minimo);
    } else {
        printf("Peso y altura deben ser positivos\n");
    }
    printf("Resumen: peso %.2f kg, altura %.2f m\n", peso, altura);
}
