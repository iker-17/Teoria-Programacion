#include <stdio.h>
int main() {
    int cap_disco, cant_doc, cant_img, cant_vid, cant_prog;
    float tam_doc, tam_img, tam_vid, tam_prog;
    float esp_doc, esp_img, esp_vid, esp_prog, esp_total_MB, esp_total_GB, porcentaje;

    printf("Ingrese la capacidad del disco en GB: ");
    scanf("%d", &cap_disco);
    printf("Ingrese la cantidad de documentos: ");
    scanf("%d", &cant_doc);
    printf("Ingrese el tamaño de los documentos en MB: ");
    scanf("%f", &tam_doc);
    printf("Ingrese la cantidad de imágenes: ");
    scanf("%d", &cant_img);
    printf("Ingrese el tamaño de las imágenes en MB: ");
    scanf("%f", &tam_img);
    printf("Ingrese la cantidad de videos: ");
    scanf("%d", &cant_vid);
    printf("Ingrese el tamaño de los videos en MB: ");
    scanf("%f", &tam_vid);
    printf("Ingrese la cantidad de programas: ");
    scanf("%d", &cant_prog);
    printf("Ingrese el tamaño de los programas en MB: ");
    scanf("%f", &tam_prog);

    esp_doc = cant_doc * tam_doc;
    esp_img = cant_img * tam_img;
    esp_vid = cant_vid * tam_vid;
    esp_prog = cant_prog * tam_prog;
    esp_total_MB = esp_doc + esp_img + esp_vid + esp_prog;
    esp_total_GB = esp_total_MB / 1024.0;
    porcentaje = (esp_total_GB / cap_disco) * 100.0;

    printf("Espacio documentos: %.2f MB\n", esp_doc);
    printf("Espacio imágenes: %.2f MB\n", esp_img);
    printf("Espacio videos: %.2f MB\n", esp_vid);
    printf("Espacio programas: %.2f MB\n", esp_prog);
    printf("Total: %.2f MB (%.2f GB)\n", esp_total_MB, esp_total_GB);
    printf("Uso: %.2f %%\n", porcentaje);
    return 0;
}
