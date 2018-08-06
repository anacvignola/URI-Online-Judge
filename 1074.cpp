#include <iostream>

using namespace std;

int main(){
    int N, X;
    do{
        cin >> N;
    }while(N>10000);
    for(int i = 0; i<N; i++){
        do{
            cin >> X;
        }while(X<-10000000 || X>10000000);
        if(X==0){
            cout << "NULL" << endl; 
        }else if(X%2==0 && X>=0){
            cout << "EVEN POSITIVE" << endl;
        }else if(X%2==0 && X<0){
            cout << "EVEN NEGATIVE" << endl;
        }else if(X%2!=0 && X>=0){
            cout << "ODD POSITIVE" << endl;
        }else{
            cout << "ODD NEGATIVE" << endl;
        }
    }
    return 0;
}