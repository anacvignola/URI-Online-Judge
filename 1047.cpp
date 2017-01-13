#include <iostream>

using namespace std;

int main(){
    int hi, hf, mi, mf, dh, dm;
    cin >> hi >> mi;
    cin >> hf >> mf;
    dh = hf - hi;
    dm = mf - mi;
    if(dh < 0){
        dh = 24 + (hf-hi);
    }
    if (dm < 0){
        dm = 60 + (mf-mi);
        dh = dh - 1;
    }
    if (hf == hi && mf == mi){
        cout << "O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)" << endl;
    }else{
        cout << "O JOGO DUROU " << dh << " HORA(S) E " << dm << " MINUTO(S)" << endl;
    }
    return 0;
}
