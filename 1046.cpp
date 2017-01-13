#include <iostream>

using namespace std;

int main(){
	int horai, horaf, jogo;
	cin >> horai >> horaf;
	if (horai == horaf) {
		jogo = 24;
	}else if (horai > horaf) {
		jogo = (horaf - horai) + 24;
	}else {
		jogo = horaf - horai;
	}
	cout << "O JOGO DUROU " << jogo << " HORA(S)" << endl;
	return 0;
}
