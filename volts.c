#include <stdio.h>
int main(void){

    float volts,temperatura;

    printf("\tsistema electrico de medicion\n");
    printf("\tingrese el voltaje medido:\n");
    scanf("%f",volts);

    if(volts<-3 && volts>10){
        printf("voltaje fuera del rango de medicion.\n");
    }
    else{
        //100 milivolts=0.1 volts=1grado =temperatura=volts*10
        temperatura=volts*10;

        printf("temperatura sensada:%.2fgrados\n",temperatura);
        
        if(volts < 1){
            printf("clasificacion:fria\n");
        }
            else if (volts < 4){
                printf("clasificacion:templada\n");
            }
            else{
                printf("clasificacion:caliente\n");
            }    
        }
    return 0;
}