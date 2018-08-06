#include <iostream>

using namespace std;

int main(){
    int N;
    do{
        cin >> N;
    }while(N>10000);
    for(int i = 1; i<10000; i++){
        if(i%N==2){
            cout << i << endl;
        }
    }
    return 0;
}
