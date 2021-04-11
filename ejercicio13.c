/*13) Generar la serie fibonacci para ne terminos
Introdusca un valor: 15
0,  0,  1,  1,  0,  0,  1,  1,  0,  0,  1,  1,  0,  0,  1
*/
#include<stdio.h>
#include<ncurses.h>
#include<math.h>
void main(){
    int n,k,s,sw,i;
    printf("Introdusca un valor: ");
    scanf("%d",&n);
    sw=-1;
    k=n;
    i=0;
    while(i<k){
        
        if(i%2==0)
            sw=sw*(-1);
        if(sw>0)
            s=0;
        else
            s=1;
        i++;
        if(i<k)
            printf(" %d, ",s);
        else
            printf(" %d\n",s);
    }
}
