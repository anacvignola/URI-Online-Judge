#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    float salario, reajuste, novosalario = 0;
    int percentual;
    cin >> salario;
    if(salario >= 0 && salario <= 400){
        percentual=15;
        reajuste = (salario*percentual)/100;
    }else if(salario <= 800){
        percentual=12;
        reajuste = (salario*percentual)/100;
    }else if(salario <= 1200){
        percentual=10;
        reajuste = (salario*percentual)/100;
    }else if(salario <= 2000){
        percentual=7;
        reajuste = (salario*percentual)/100;
    }else{
        percentual=4;
        reajuste = (salario*percentual)/100;
    }
    novosalario=reajuste+salario;
    cout << "Novo salario: " << fixed <<setprecision(2) << novosalario << endl;
    cout << "Reajuste ganho: " << fixed <<setprecision(2) << reajuste << endl;
    cout << "Em percentual: " << percentual << " %" << endl;
    return 0;
}
