/*14) Generar la serie fibonacci para ne terminos
Introdusca un valor: 7
 0,  1,  1,  2,  3,  5,  8
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