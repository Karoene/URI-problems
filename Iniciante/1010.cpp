#include <iostream>

using namespace std;


int main(){
    int cod1, cod2, quant1, quant2;
    double val1, val2;

    cin.precision(2);
    cin.setf(ios::fixed);
    cout.precision(2);
    cout.setf(ios::fixed);

    cin >> cod1 >> quant1 >> val1;
    cin >> cod2 >> quant2 >> val2;

    cout << "VALOR A PAGAR: R$ " << (quant1*val1)+(quant2*val2) << endl;

}