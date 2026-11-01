/*una persona ahorro el 15% de su salario semanal el 20% destina sus pagos de servicio y productos,el 50% a comidas y el 15% a diversion*/

#include <stdio.h>

int main (void){

    float s,ss,ps,c,div;
    
    printf("introduce el salario semanal del trabajador");
    scanf("%f",&s);

    ss=s*0.15*4;
    ps=s*0.15*4;
    c=s*0.15*4;
    div=s*0.15*4;

    printf("ahorro%f\n",ss);
    printf("productos y servicios%f\n",ps);
    printf("comidas%f\n",c);
    printf("diversion%f\n",div);
    
    return 0;

}