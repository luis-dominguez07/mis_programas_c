#include <stdio.h>
int main(void){
    int pizzas;

    printf("\t [1].-pizza sencilla \n");
    printf("\t [2].-pizza mediana \n");
    printf("\t [3].-pizza familiar \n");
    printf("\t [4].-pizza jumbo \n");
    printf("ingresa una opcion: ");
    scanf("%d",&pizzas);
    
    switch(pizzas){

        case 1:
            printf("elegiste una pizza sencilla cuesta 150\n");
            break;
        case 2:
            printf("elegiste una pizza mediana cuesta 180\n");
            break;
        case 3:
            printf("elegiste una pizza familiar cuesta 200\n");
            break;
        case 4:
            printf("elegiste una pizza jumbo cuesta 220\n");
            break;

        default:
            printf("La opcion no es valida\n");
        }
    printf("gracias por su compra regrese pronto:)\n");
    return 0;
}