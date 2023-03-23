#include <iostream>

using namespace std;

int main(){

    int valor, quantCedula;

    cin >> valor;
    
    cout << valor << endl;
    quantCedula = valor / 100;
    cout << quantCedula <<  " nota(s) de R$ 100,00" << endl;
    valor %= 100;

    quantCedula = valor / 50;
    cout << quantCedula <<  " nota(s) de R$ 50,00" << endl;
    valor %= 50;

    quantCedula = valor / 20;
    cout << quantCedula <<  " nota(s) de R$ 20,00" << endl;
    valor %= 20;

    quantCedula = valor / 10;
    cout << quantCedula <<  " nota(s) de R$ 10,00" << endl;
    valor %= 10;

    quantCedula = valor / 5;
    cout << quantCedula <<  " nota(s) de R$ 5,00" << endl;
    valor %= 5;

    quantCedula = valor / 2;
    cout << quantCedula <<  " nota(s) de R$ 2,00" << endl;
    valor %= 2;

    quantCedula = valor / 1;
    cout << quantCedula <<  " nota(s) de R$ 1,00" << endl;
    valor %= 1;



}