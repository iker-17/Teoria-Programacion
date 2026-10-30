#include <stdio.h>
#include <math.h>

int main() {
	float x1, y1, r1, x2, y2, r2, dx, dy, d, suma, diferencia;
	printf("Ingrese x1, y1 y r1: ");
	if (scanf("%f %f %f", &x1, &y1, &r1) != 3) {
		printf("Entrada invalida.\n");
	}

	printf("Ingrese x2, y2 y r2: ");
	if (scanf("%f %f %f", &x2, &y2, &r2) != 3) {
		printf("Entrada invalida.\n");
	}

	if (r1 < 0 || r2 < 0) {
		printf("Los radios deben ser positivos\n");
        return 1;
	}

	dx = x2 - x1;
	dy = y2 - y1;
	d = sqrt(dx * dx + dy * dy);
	suma = r1 + r2;
	diferencia = fabs(r1 - r2);

	if (d == 0 && diferencia == 0) {
		printf("Las circunferencias coinciden.\n");
	} else 
    if (d > suma) {
		printf("Son exteriores.\n");
	} else 
    if (d == suma) {
		printf("Son tangentes exteriores.\n");
	} else 
    if (d > diferencia) {
		printf("Son secantes.\n");
	} else 
    if (d == diferencia && d > 0) {
		printf("Son tangentes interiores.\n");
	} else {
		printf("Son interiores sin interseccion.\n");
	}

	return 0;
}
