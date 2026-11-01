#include <stdio.h>

int main (void){

    int a,b;

    printf("ingresa la edad minima:");
    scanf("%d",&a);

    printf("ingresa tu edad:");
    scanf("%d",&b);

    if(a>=b){
        printf("tiene acceso");
        }
    else{
        printf("no tiene acceso:");
    }
    return 0;

}
