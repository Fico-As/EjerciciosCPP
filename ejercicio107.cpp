#include<iostream>
#include<ncurses.h>
using namespace std;
int main(){
    int numeros[30][30];
    int n;
    cout<<"digite la dimencion de la matriz";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"Digite un numero["<<i<<"]["<<j<<"]: ";
            cin>>numeros[i][j];
        }
    }
    cout<<"Matriz Original\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            cout<<numeros[i][j]<<"  ";
        cout<<endl;
    }
    cout<<"Matriz Transpuesta\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            cout<<numeros[j][i]<<"  ";
        cout<<endl;
    }
}