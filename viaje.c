/* una compaañia de viajes cuenta con 3 tipos de autobuses a,b y c cada uno tiene un precioso por kilometro
recorrido por persona los costos respectivos son 2,2.50 y 3 pesos se requiere determinar el costo total
y poir persona del viaje considerando que cuando  */


#include <stdio.h>
int main (void){
    char autobus;
    int personas,kilometros;
    float precio,total;

    printf(" ingrese el tipo de autobus(A,B o C):\n");
    scanf("%c",&autobus);

    printf(" ingrese el numero de personas:\n");
    scanf("%d",&personas);

    printf(" ingrese los kilometros recorridos:\n");
    scanf("%d",&kilometros);

    switch(autobus){
        case 'A':
        case 'a':
            precio = 2;
            break;
        case 'B':
        case 'b':
            precio = 2.50;
            break;
        case 'C':
        case 'c':
            precio = 3;
            break;

        default:
        printf("autobus no valido\n");
        return 0;
    }
    if (personas<20)
        personas=20;

    total=precio*kilometros*personas;

    printf("costo por personas:%.2f\n",precio*kilometros);
    printf("costo total del viaje:%.2f\n",total);
    return 0;
}