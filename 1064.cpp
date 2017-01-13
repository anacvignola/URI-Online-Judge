#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int cont=0;
    float n, media;
    for(int i=0; i<6; i++){
        cin >> n;
        if(n>0){
            media+=n;
            cont++;
        }
    }
    media=media/cont;
    cout << cont << " valores positivos" << endl;
    cout << fixed << setprecision(1) << media << endl;
    return 0;
}
