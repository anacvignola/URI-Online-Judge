#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main(){
    string nome;
    double salfixo, venda ,total;
    getline(cin, nome);
    cin >> salfixo >> venda;
    total=salfixo+venda*0.15;
    cout << "TOTAL = R$ " << setprecision(2) << fixed << total << endl;
    return 0;
}
