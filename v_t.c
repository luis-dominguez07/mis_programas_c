#include <stdio.h>

int main() {
    float voltaje, temperatura;

    printf("Ingrese el voltaje medido: ");
    scanf("%f", &voltaje);

    if (voltaje < -3 && voltaje > 10) {
        printf("Voltaje fuera del rango de medicion.\n");
    }
    else {
        temperatura = voltaje * 10;

        printf("Temperatura sensada: %.2f grados Celsius\n",
               temperatura);

        if (voltaje < 1) {
            printf("Clasificacion: Fria\n");
        }
        else if (voltaje < 4) {
            printf("Clasificacion: Templada\n");
        }
        else {
            printf("Clasificacion: Caliente\n");
        }
    }

    return 0;
}