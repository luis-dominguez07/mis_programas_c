#include <stdio.h>

int main(void) {

    int entero;

    printf("ingresa un N.entero:\n", entero);
    scanf("%d", &entero);

    float decimal;

    printf("ingresa un N.decimal:\n", decimal);
    scanf("%f", &decimal);

    char caracter;


    printf("ingresa un caracter:\n", caracter);
    scanf(" %c", &caracter);

    printf("datos ingresados:\n");
    printf("N.entero: %d\n", entero);
    printf("N.decimal: %f\n", decimal);
    printf("caracter: %c\n", caracter);

    return 0;
}