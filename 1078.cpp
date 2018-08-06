#include <iostream>

using namespace std;

int main(){
    int N;
    do{
        cin >> N;
    }while(N<2 || N>10000);
    for(int i = 1; i<=10; i++){
            cout << i << " x " << N << " = " << (i*N) << endl;
    }
    return 0;
}