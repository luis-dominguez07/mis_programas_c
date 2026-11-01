#include <stdio.h>

int main(void) {
    int personas;
    float precio, total;

    printf("LA LANGOSTA AHUMADA\n");
    printf("Ingrese el numero de personas: ");
    scanf("%d", &personas);

    if (personas <= 0) {
        printf("Numero de personas no valido\n");
    }
    else if (personas <= 200) {
        precio = 95;
        total = personas * precio;
        printf("Costo por persona: $%.2f\n", precio);
        printf("Costo total del evento: $%.2f\n", total);
    }
    else if (personas <= 300) {
        precio = 85;
        total = personas * precio;
        printf("Costo por persona: $%.2f\n", precio);
        printf("Costo total del evento: $%.2f\n", total);
    }
    else {
        precio = 75;
        total = personas * precio;
        printf("Costo por persona: $%.2f\n", precio);
        printf("Costo total del evento: $%.2f\n", total);
    }

    return 0;
}