#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	float a, b, c, p=0, area=0;
	cin >> a >> b >> c;
	if (a < b + c & b < a + c & c < a + b) {
		p = a + b + c;
		cout << "Perimetro = " << setprecision(1) << fixed << p << endl;
	}
	else {
		area = (c*(a + b)) / 2;
		cout << "Area = " << setprecision(1) << fixed << area << endl;
	}
	return 0;
}
