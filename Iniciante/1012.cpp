#include <iostream>


using namespace std;

int main(){
    double A, B, C;

    cin.precision(1);
    cin.setf(ios::fixed);
    cout.precision(3);
    cout.setf(ios::fixed);

    cin >> A >> B >> C;

    cout << "TRIANGULO: " << (A*C)/2.0 << endl;
    cout << "CIRCULO: " << 3.14159*(C*C) << endl;
    cout << "TRAPEZIO: " << ((A+B)*C)/2.0 << endl;
    cout << "QUADRADO: " <<  B*B << endl;
    cout << "RETANGULO: " << A*B << endl;

}