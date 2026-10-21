#include <stdio.h>
int main (void){
    int personas;
    float precio, total;

    printf("LA LANGOSTA AHUMADA\n");
    printf("ingrese el numero de personas:");
    scanf("%d",&personas);

    if(personas<=0){
        printf("numero de personas no valido\n");
    }
    else if (personas <=200){
        precio=95;
        total=personas*precio;
        printf("costo por personas:$%.2f\n",precio);
        printf("costo total del evento:$%.2f\n",total);
    }
    else if (personas <=300){
        precio=85;
        total=personas*precio;
        printf("costo por personas:$%.2f\n",precio);
        printf("costo total del evento:$%.2f\n",total);
    }
    else{
        precio=75;
        total=personas*precio;
        printf("costo por personas:$%.2f\n",precio);
        printf("costo total del evento:$%.2f\n",total);
    }
    return 0;
}