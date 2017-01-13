#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int num, horas;
    double valorh, salario;
    cin >> num >> horas >> valorh;
    salario=horas*valorh;
    cout << "NUMBER = " << num << endl;
    cout << "SALARY = U$ " << setprecision(2) << fixed << salario << endl;
    return 0;
}
