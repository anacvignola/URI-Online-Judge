#include <iostream>

using namespace std;

int main(){
    int x, y, i=0, aux=0, soma=0;
    cin >> x >> y;
    if(y>x){
      aux=x;
      x=y;
      y=aux;
    }
    for(i=y+1; i<x; i++){
        if(i%2!=0){
            soma+=i;
          }
        }
    cout << soma << endl;
    return 0;
}
