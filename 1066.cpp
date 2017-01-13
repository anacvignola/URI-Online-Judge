#include <iostream>

using namespace std;

int main(){
    int n, par=0, impar=0, nega=0, cont=0;
    for(int i=0; i<5; i++){
        cin >> n;
        if(n%2==0){
            par++;
        }else{
            impar++;
        }
        if(n>0){
            cont++;
        }else if(n<0){
            nega++;
        }
    }
    cout << par << " valor(es) par(es)" << endl;
    cout << impar << " valor(es) impar(es)" << endl;
    cout << cont << " valor(es) positivo(s)" << endl;
    cout << nega << " valor(es) negativo(s)" << endl;
    return 0;
}
