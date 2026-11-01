#include <stdio.h>

int main(void) {
    int cita, i;
    float pago, total = 0;

    printf("Ingrese el numero de cita: ");
    scanf("%d", &cita);

    if (cita <= 0) {
        printf("Numero de cita no valido.\n");
        return 0;
    }

    if (cita <= 3) {
        pago = 200;
    }
    else if (cita <= 5) {
        pago = 150;
    }
    else if (cita <= 8) {
        pago = 100;
    }
    else {
        pago = 50;
    }

    for (i = 1; i <= cita; i++) {
        if (i <= 3) {
            total += 200;
        }
        else if (i <= 5) {
            total += 150;
        }
        else if (i <= 8) {
            total += 100;
        }
        else {
            total += 50;
        }
    }

    printf("\nEl pago de la cita es: $%.2f\n", pago);
    printf("El total pagado por el tratamiento es: $%.2f\n", total);

    return 0;
}