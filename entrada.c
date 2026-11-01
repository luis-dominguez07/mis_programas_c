#include <stdio.h>

int main(void) {

    int a;

    printf("ingrese un numero positivo: \n");
    scanf("%i", &a);

    if (a >= 0 && a < 20) {
        printf("esta en la zona 1\n");
    }
    else if (a >= 20 && a < 40) {
        printf("esta en la zona 2");
    }
    else {
        printf("esta en la zona 3");
    }

    return 0;
}