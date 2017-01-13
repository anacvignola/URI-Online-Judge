#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int velocidade, tempo;
    float litros;
    cin >> tempo >> velocidade;
    litros=(velocidade*tempo)/12.0;
    cout << setprecision(3) << fixed << litros << endl;
    return 0;
}
