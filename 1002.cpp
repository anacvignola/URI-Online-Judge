#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main(){
    double area, raio;
    cin >> raio;
    area=3.14159*pow(raio, 2);
    cout <<"A=" << setprecision(4) << fixed << area << endl;
    return 0;
}
