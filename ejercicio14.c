/*14) Generar la serie fibonacci para ne terminos
Introdusca un valor: 789 
digito 9 =>  1 +  3 +  5 +  7 +  9 +  11 +  13 +  15 +  17 = 81
digito 8 =>  1 +  3 +  5 +  7 +  9 +  11 +  13 +  15 = 64
digito 7 =>  1 +  3 +  5 +  7 +  9 +  11 +  13 = 49
*/
#include<stdio.h>
#include<ncurses.h>
#include<math.h>
void main(){
    int n,k,s,sw,j,dig,i;
    printf("Introdusca un valor: ");
    scanf("%d",&n);
    sw=-1;
    k=n;
    while(0<k){
        dig=(int)k%10;
        k=(int)k/10;
        i=1;
        s=0;
        printf("digito %d => ",dig);
        for(j=1;j<=dig;j++){
            s=s+j*2-1;
            if(j!=dig)
                printf(" %d + ",j*2-1);
            else
                printf(" %d",j*2-1);
        }
        printf(" = %d\n",s);        
    }
}