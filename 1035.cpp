#include <iostream>

using namespace std;

int main(){
    int A, B, C, D, somaAB, somaCD;
    cin >> A >> B >> C >> D;
    somaAB=A+B;
    somaCD=C+D;
    if(B>C && D>A && somaCD>somaAB && C>0 && D>0 && A%2==0){
        cout << "Valores aceitos" << endl;
    }else{
        cout << "Valores nao aceitos" << endl;
    }
    return 0;
}
