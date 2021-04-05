//Determinar cual numero decimal en mayor
#include<stdio.h>
//#include<math.h>
#include<ncurses.h>

void main(){
   float a,b;
    printf("Leer el valor de A: ");
    scanf("%f",&a); 
    printf("Leer el valor de B: ");
    scanf("%f",&b);
    a=a-(int)a;
    b=b-(int)b;
    printf("%f\n",a);
    printf("%f\n",b);
    while(b!=(int)b){
        b=b*10;
    }
    while(a!=(int)a){
        a*=10;
    }
    if(a>b)
    printf("El valor de %.2f en mayor que %.2f \n",a,b);
    else
    printf("El valor de %.2f en mayor que %.2f \n",b,a);
}