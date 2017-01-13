#include <iostream>
#include <locale>
#include <iomanip>

using namespace std;

int main(){
	int cod, quant;
	float total = 0;
	setlocale(LC_ALL, "Portuguese");
	do {
		cin >> cod >> quant;
	} while (cod < 0 || cod>5);
	switch (cod){
	case 1:
		total = quant*4.00;
		break;
	case 2:
		total = quant*4.50;
		break;
	case 3:
		total = quant*5.00;
		break;
	case 4:
		total = quant*2.00;
		break;
	default:
		total = quant*1.50;
		break;
	}
	cout << "Total: R$ " << setprecision(2) << fixed << total << endl;
	system("pause");
	return 0;
}
