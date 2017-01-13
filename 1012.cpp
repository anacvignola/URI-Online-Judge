#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double a, b, c, tri, cir, trap, qua, ret;
    cin >> a >> b >> c;
    tri=(a*c)/2;
    trap=((a+b)*c)/2;
    cir=(c*c)*3.14159;
    qua=b*b;
    ret=a*b;
    cout << "TRIANGULO: " << setprecision(3) << fixed << tri << endl;
    cout << "CIRCULO: " << setprecision(3) << fixed << cir << endl;
    cout << "TRAPEZIO: " << setprecision(3) << fixed << trap << endl;
    cout << "QUADRADO: " << setprecision(3) << fixed << qua << endl;
    cout << "RETANGULO: " << setprecision(3) << fixed << ret << endl;
    return 0;
}
