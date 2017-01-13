#include <iostream>
#include <iomanip>
#include <math.h>
#include <locale.h>

using namespace std;

int main(){
    setlocale(LC_ALL, "Portuguese");
    int n100=0, n50=0, n20=0, n10=0, n5=0, n2=0, m1=0, m50=0, m25=0, m10=0, m5=0, m01=0, notas=0, moedas=0;
    double valor;
    do{
        cin >> valor;
    }while(valor<=0 || valor>1000000.00);

    notas=(int)valor;
    moedas=(int)(valor*100)%100;

    if(notas>=100){
        n100=notas/100;
        notas=notas%100;
    }
    if(notas>=50){
        n50=notas/50;
        notas=notas%50;
    }
    if(notas>=20){
        n20=notas/20;
        notas=notas%20;
    }
    if(notas>=10){
        n10=notas/10;
        notas=notas%10;
    }
    if(notas>=5){
        n5=notas/5;
        notas=notas%5;
    }
    if(notas>=2){
        n2=notas/2;
        notas=notas%2;
    }

    if(notas>=1){
        m1=notas/1;
    }
    if(moedas>=50){
        m50=moedas/50;
        moedas=moedas%50;
    }
    if(moedas>=25){
        m25=moedas/25;
        moedas=moedas%25;
    }
    if(moedas>=10){
        m10=moedas/10;
        moedas=moedas%10;
    }
    if(moedas>=5){
        m5=moedas/5;
        moedas=moedas%5;
    }
    if(moedas>=1){
        m01=moedas/1;
    }
    cout << "NOTAS:" << endl;
    cout << n100 << " nota(s) de R$ 100.00" << endl;
    cout << n50 << " nota(s) de R$ 50.00" << endl;
    cout << n20 << " nota(s) de R$ 20.00" << endl;
    cout << n10 << " nota(s) de R$ 10.00" << endl;
    cout << n5 << " nota(s) de R$ 5.00" << endl;
    cout << n2 << " nota(s) de R$ 2.00" << endl;
    cout << "MOEDAS:" << endl;
    cout << m1 << " moeda(s) de R$ 1.00" << endl;
    cout << m50 << " moeda(s) de R$ 0.50" << endl;
    cout << m25 << " moeda(s) de R$ 0.25" << endl;
    cout << m10 << " moeda(s) de R$ 0.10" << endl;
    cout << m5 << " moeda(s) de R$ 0.05" << endl;
    cout << m01 << " moeda(s) de R$ 0.01" << endl;
    return 0;
}
