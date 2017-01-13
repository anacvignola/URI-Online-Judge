#include <iostream>

using namespace std;

int main(){
    int x, i=0;
    do{
        cin >> x;
    }while(x <= 1|| x >= 1000);
    for(i=1; i<=x; i++){
        if(i%2!=0){
            cout << i << endl;
        }
    }
    return 0;
}
