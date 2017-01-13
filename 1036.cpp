#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
    double a, b, c, delta, r1, r2;
    cin >> a >> b >> c;
    delta=(pow(b,2))-4*a*c;
    if(a==0 || delta<0){
        cout << "Impossivel calcular" << endl;
    }else{
        delta=sqrt(delta);
        r1=(-b+delta)/(2*a);
        r2=(-b-delta)/(2*a);
        cout << "R1 = " << setprecision(5) << fixed << r1 << endl;
        cout << "R2 = " << setprecision(5) << fixed << r2 << endl;
    }
    return 0;
}
