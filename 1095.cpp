#include <iostream>

using namespace std;

int main(){
    int i, j=60;
    for(i=1;i<40;i+=3){
        cout << "I=" << i << " J=" << j << endl; 
        j-=5;
    }
    return 0;
}