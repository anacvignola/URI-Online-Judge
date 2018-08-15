#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int N, c=0, r=0, s=0, t=0, Quantia;
        cin >> N;
    char Tipo;
    for(int i=0; i<N; i++){
        do{
            cin >> Quantia;
            cin >> Tipo;
        }while(Quantia<1 || Quantia>15);
        switch(Tipo){
            case 'C':
            t+=Quantia;
            c+=Quantia;
            break;
            case 'S':
            t+=Quantia;
            s+=Quantia;
            break;
            case 'R':
            t+=Quantia;
            r+=Quantia;
            break;
        }
    }
    cout << "Total: " << t << " cobaias" << endl;
    cout << "Total de coelhos: " << c << endl;
    cout << "Total de ratos: " << r << endl;
    cout << "Total de sapos: " << s << endl;
    cout << "Percentual de coelhos: " << fixed << setprecision(2) << ((100.00*c)/t) << " %" << endl;
    cout << "Percentual de ratos: " << fixed << setprecision(2) << ((100.00*r)/t) << " %" << endl;
    cout << "Percentual de sapos: " << fixed << setprecision(2) << ((100.00*s)/t) << " %" << endl;
    return 0;
}