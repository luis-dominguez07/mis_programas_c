#include <stdio.h>

int main(void) {

    int entero;

    printf("Ingresa tu edad: ");
    scanf("%d", &entero);

    float decimal;

    printf("Ingresa tu estatura en metros: ");
    scanf("%f", &decimal);

    char caracter;

    printf("Ingresa la inicial de tu nombre (Luis): ");
    scanf(" %c", &caracter);

    printf("\n--- DATOS INGRESADOS ---\n");
    printf("Edad: %d años\n", entero);
    printf("Estatura: %.2f metros\n", decimal);
    printf("Inicial de tu nombre: %c\n", caracter);

    return 0;
}