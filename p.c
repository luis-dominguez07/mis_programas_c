#include
int main(void){

    int a,b;
    a=1;
    a+=3;
    b+=a+3;

    printf("%d",a!=b+1);
    printf("%d",1-a<b);
    printf("%d",a==b+2);
    printf("%d",a>=b);
    printf("%d",a+2<=b);
    
    return 0;
}
