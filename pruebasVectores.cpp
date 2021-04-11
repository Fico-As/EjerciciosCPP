#include<iostream>
#include<ncurses.h>
#include<cstdlib>
#include <string>
#include <sstream>
using namespace std;
template <class T>
inline string ToString(const T& t) {
  stringstream ss;
  ss << t;
  return ss.str(); 
}
inline string gotoxy1(const int& x,const int& y) {
  return "\33[" + ToString(x) + ";" + ToString(y) + "H"; 
}
int main(void){
    int v1[10];
    int v2[10];
    int i;
    for(i=0;i<10;i++)
        v1[i]=i;
    for(i=0;i<10;i++)
        cout<<v1[i]<<", ";
        cout<<endl;
        system("clear"); // Importante para no sobreescribir la pantalla.
    // Emular goto(x, y);
        cout << gotoxy1(10,20) << "Hole" << endl;
        cout<<"hola";
    return 0;
}
