#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main(){
    int r;
    double volume;
    cin >> r;
    volume=(4.0/3.0)*3.14159*pow(r, 3);
    cout << "VOLUME = " << setprecision(3) << fixed << volume << endl;
    return 0;
}
