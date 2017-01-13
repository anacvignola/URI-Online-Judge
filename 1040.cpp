#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	double n1, n2, n3, n4, media = 0, exa;
	do {
		cin >> n1 >> n2 >> n3 >> n4;
	} while (n1 < 0 || n2 < 0 || n3 < 0 || n4 < 0 || n1>10 || n2>10 || n3>10 || n4>10);
	media = (n1 * 2 + n2 * 3 + n3 * 4 + n4 * 1)/(2 + 3 + 4 + 1);
	cout << "Media: " << setprecision(1) << fixed << media << endl;
	if (media >= 7) {
		cout << "Aluno aprovado." << endl;
	}else if (media < 5) {
			cout << "Aluno reprovado." << endl;
	}else if(media >=5 && media<7){
		cout << "Aluno em exame." << endl;
		cin >> exa;
		cout << "Nota do exame: " << exa << endl;
		media = (media + exa) / 2;
		if (media >= 5) {
			cout << "Aluno aprovado." << endl;
		}
		else {
			cout << "Aluno reprovado." << endl;
		}
		cout << "Media final: " << setprecision(1) << fixed << media << endl;
	}
	return 0;
}
