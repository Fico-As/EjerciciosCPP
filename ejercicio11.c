/*11) Leer un lote de numeros cuyo ultimo numero es -999 contar cuantos numeros positivos estan precedidos
de dos numeros negativos.
1, 2, 5, -4, -9, 7, 2,... 
cantidad = 1
*/
#include<stdio.h>
#include<ncurses.h>
#include<math.h>
void main(){
    int n,i,j,a,k;
    double pot, fact;
    float s;
    printf("Introdusca un valor: ");
    i=1;
    a=0;
    do{
        scanf("%d",&n);
        if(i==1)
            k=n;
        if(i==2)
            j=n;
        if(i>2){
            if(n>0 && j<0 && k<0)
            a++;
            k=j;
            j=n;
        }
        i++;
    }while(n!=-999);
    printf("cantidad de numeros precedidos de dos negativos es= %d\n",a);
}
