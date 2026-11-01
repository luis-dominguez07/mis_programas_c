#include <stdio.h>

int main (void){

    int a;

    printf("ingresa tu edad:");
    
    scanf("%d",&a);

    if(a>=13){
        printf("tiene acceso");
        }
    else{
        printf("no tiene acceso:");
    }
    return 0;

}
