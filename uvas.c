#include <stdio.h>

int main() {
    char tipo;
    int tamaño;
    float precio, kilos, precioFinal, total;

    printf("Ingrese el tipo de uva (A o B): ");
    scanf(" %c", &tipo);

    printf("Ingrese el tamano (1 o 2): ");
    scanf("%d", &tamaño);

    printf("Ingrese el precio inicial por kilo:$ ");
    scanf("%f", &precio);

    printf("Ingrese los kilos de uva:kg ");
    scanf("%f", &kilos);

    switch (tipo) {
        case 'A':
        case 'a':
            switch (tamaño) {
                case 1:
                    precioFinal = precio + 0.02;
                    break;
                case 2:
                    precioFinal = precio + 0.30;
                    break;
                default:
                    printf("Tamaño no valido\n");
                    return 0;
            }
            break;

        case 'B':
        case 'b':
            switch (tamaño) {
                case 1:
                    precioFinal = precio - 0.30;
                    break;
                case 2:
                    precioFinal = precio - 0.50;
                    break;
                default:
                    printf("Tamaño no valido\n");
                    return 0;
            }
            break;

        default:
            printf("Tipo de uva no valido\n");
            return 0;
    }

    total = precioFinal * kilos;

    printf("Precio final por kilo: $%.2f\n", precioFinal);
    printf("Total a recibir: $%.2f\n", total);

    return 0;
}
