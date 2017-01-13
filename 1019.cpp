#include <iostream>

using namespace std;

int main(){
    int num, horas, minutos, segundos;
    cin >> num;
    horas=num/3600;
    num=num%3600;
    minutos=num/60;
    segundos=num%60;
    cout << horas << ":" << minutos << ":" << segundos << endl;
    return 0;
}
