#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main(){
    float x1, y1, x2, y2, d, p1, p2;
    cin >> x1 >> y1 >> x2 >> y2;
    p1=pow((x2-x1), 2);
    p2=pow((y2-y1), 2);
    d=sqrt(p1+p2);
    cout << setprecision(4) << fixed << d << endl;
    return 0;
}
