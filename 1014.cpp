#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int x;
    float y, c;
    cin >> x >> y;
    c=x/y;
    cout << setprecision(3) << fixed << c << " km/l" << endl;
    return 0;
}
