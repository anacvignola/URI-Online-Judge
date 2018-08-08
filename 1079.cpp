#include <iostream>
#include <iomanip> 

using namespace std;

int main(){
    int N;
    float nota, media=0;
    cin >> N;
    for(int i=0; i<N; i++){
        for(int j=0; j<3; j++){
            cin >> fixed >> setprecision(1) >> nota;
            switch(j){
                case 0:
                media+=nota*2;
                break;
                case 1:
                media+=nota*3;
                break;
                case 2:
                media+=nota*5;
                break;
            }
        }
        cout << fixed << setprecision(1) << (media/10) << endl;
        media=0;
    }
    return 0;
}